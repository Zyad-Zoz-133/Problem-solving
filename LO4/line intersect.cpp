#include <iostream>
using namespace std;

void p(double m1,double m2,double c1,double c2){
    if(m1==m2){
        // check if the two lines are pararel
        if(c1!=c2){
            cout << "The two lines are pararel";
        }
        // the line is over each other 
        else{
            cout << "the lines are over each other";
        }
        return ;
    }

    // check if the two lines Perpendicular 
    if(m1*m2== -1){
        cout << "the two lines are Perpendicular to each other";
    }


    //calculate the intersect point of the two lines
    double x = (c1-c2)/(m1-m2);
    double y = m1*x+c1;

    cout << "the intersect point of the two lines is : ("<< x << ","<<y<<")";

}

int main(){
    double m1,m2,c1,c2;
    cin >> m1>>m2>>c1>> c2;

    p(m1,m2,c1,c2);
}

