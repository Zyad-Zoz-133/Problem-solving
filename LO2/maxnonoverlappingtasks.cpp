#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Compare tasks based on their ending times
bool compare(pair<int, int> a, pair<int, int> b)
{
    return a.second < b.second;
}

// Finds the maximum number of non-overlapping tasks
int maxNonOverLappingTasks(vector<pair<int, int>> &tasks)
{

    // Sort tasks by their ending times
    sort(tasks.begin(), tasks.end(), compare);

    // Store the ending time of the last selected task
    int currendtime = 0;

    // Count the number of selected tasks
    int count = 0;

    // Iterate through all tasks
    for (auto i : tasks)
    {

        // Select the task if it starts after or when the previous task ends
        if (i.first >= currendtime)
        {

            // Increase the number of selected tasks
            count++;

            // Update the current ending time
            currendtime = i.second;
        }
    }

    // Return the maximum number of non-overlapping tasks
    return count;
}

int main()
{

    // Store the start and end times of the tasks
    vector<pair<int, int>> tasks{
        {1, 3},
        {2, 5},
        {3, 9},
        {6, 8},
        {5, 7}};

    // Print the maximum number of non-overlapping tasks
    cout << "max number of non overlapping tasks: "
         << maxNonOverLappingTasks(tasks);
}