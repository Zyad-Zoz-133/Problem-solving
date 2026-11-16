#include <iostream>
using namespace std;

// l1p1 = line 1 point 1 
// l1p2 = line 1 point 2
// l2p1 = line 2 point 1
// l2p2 = line 2 point 2

void p(pair<double,double> l1p1,pair<double,double>l1p2,pair<double,double> l2p1,pair<double,double>l2p2){
    // get the slope of the first line
    double ml1 = (l1p1.second - l1p2.second )/(l1p1.first - l1p2.first );
    // get the slope of the second line
    double ml2 = (l2p1.second - l2p2.second )/(l2p1.first - l2p2.first );

    // get the intersect point for the first line with the Y-axis
    double cl1 = l1p1.second - l1p1.first*ml1 ;
    // get the intersect point for the second line with the Y-axis
    double cl2 = l2p1.second - l2p1.first*ml1 ;

    

}