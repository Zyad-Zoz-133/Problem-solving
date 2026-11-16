#include <iostream>

using namespace std;

void p(double m , double c , double x ,double y){

    double res = x*m+c;

    if(y==res)
        cout << "the point intersect with the line";
    else if(y<res)
        cout << "the point above the line";
    else
        cout << "the point is under the line";

}

int main (){
    p(3,2,1,5);

    double m,c,x,y;
    cout << "Enter the variables (m,c,x,y):  ";
    cin >> m >> c >> x >> y;
    p(m,c,x,y);

}