
from pathlib import Path
import re

ROOT = Path(__file__).parent
README = ROOT / "README.md"

START_MARKER = "<!-- PROBLEMS-INDEX-START -->"
END_MARKER = "<!-- PROBLEMS-INDEX-END -->"

SELF_LEARNING_FOLDER = "self learning"

problems = []

for file in ROOT.rglob("*.cpp"):
    if ".git" in file.parts:
        continue

    try:
        content = file.read_text(
            encoding="utf-8",
            errors="ignore"
        )
    except OSError:
        continue

    links = re.findall(
        r"""https?://[^\s<>"']+""",
        content
    )

    links = list(dict.fromkeys(
        link.rstrip(".,;:!?) ]}")
        for link in links
    ))

    relative_path = file.relative_to(ROOT).as_posix()
    folder_parts = file.parent.relative_to(ROOT).parts
    folder = file.parent.relative_to(ROOT).as_posix()

    if folder == ".":
        folder = "Root"

    # Files inside Self Learning go to Self Learning.
    # Everything else goes to Primary School.
    if any(
        part.lower() == SELF_LEARNING_FOLDER
        for part in folder_parts
    ):
        category = "Self Learning"
    else:
        category = "Primary School"

    for link in links:
        problems.append((category, folder, relative_path, link))

problems.sort(
    key=lambda item: (
        item[0].lower(),
        item[1].lower(),
        item[2].lower()
    )
)


def build_table(title, category_problems):
    lines = [
        f"### {title}",
        "",
        f"**Total problem links found: {len(category_problems)}**",
        "",
        "| Folder | File | Problem Link |",
        "|---|---|---|"
    ]

    for _, folder, filename, link in category_problems:
        lines.append(
            f"| `{folder}` | `{filename}` | [Open Problem]({link}) |"
        )

    lines.append("")
    return lines


self_learning_problems = [
    p for p in problems if p[0] == "Self Learning"
]

school_problems = [
    p for p in problems if p[0] == "Primary School"
]

# Primary School appears first in the README.
index_lines = [
    START_MARKER,
    "## Problem Solving Index",
    "",
    f"**Total problem links found: {len(problems)}**",
    ""
]

index_lines.extend(
    build_table("Primary School", school_problems)
)

index_lines.extend(
    build_table("Self Learning", self_learning_problems)
)

index_lines.append(END_MARKER)

new_index = "\n".join(index_lines)

# Preserve the existing README content.
if README.exists():
    readme_content = README.read_text(encoding="utf-8")
else:
    readme_content = "# Problem Solving\n"

# Replace the generated section if it already exists.
if START_MARKER in readme_content and END_MARKER in readme_content:
    pattern = (
        re.escape(START_MARKER)
        + r".*?"
        + re.escape(END_MARKER)
    )

    readme_content = re.sub(
        pattern,
        lambda match: new_index,
        readme_content,
        count=1,
        flags=re.DOTALL
    )
else:
    readme_content = (
        readme_content.rstrip() + "\n\n" + new_index + "\n"
    )

README.write_text(readme_content, encoding="utf-8")

print(f"Updated README.md with {len(problems)} problem links.")
print(f"Primary School: {len(school_problems)} problem links")
print(f"Self Learning: {len(self_learning_problems)} problem links")
