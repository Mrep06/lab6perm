#include <iostream>
#include <cmath>
using namespace std;
double deg2rad(double deg){
    double radians = deg*(M_PI/180);
    return radians;
}

double rad2deg(double rad){
    double degrees = rad*(180/M_PI);
    return degrees;
}

double findXComponent(double l1,double l2,double a1,double a2){
    double x = (l1 * cos(a1))+(l2 * cos(a2));
    return x;
}

double findYComponent(double l1,double l2,double a1,double a2){
    double y = (l1 * sin(a1))+(l2 * sin(a2));
    return y;
}

double pythagoras(double xa,double ya){
    double P = sqrt(pow(xa,2)+pow(ya,2));
    return P;
}

double  showResult(double x,double y){
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n";
    cout << "Length of the resultant vector = " << x <<"\n";
    cout << "Direction of the resultant vector (deg) = " << y << "\n";
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n";
    return 0;
}

int main(){
    double l1,l2,a1,a2,xcomp,ycomp,result_vec_length,result_vec_direction;
    cout << "Enter length of the first vector: ";
    cin >> l1;
    cout << "Enter direction of the first vector (deg): ";
    cin >> a1;
    cout << "Enter length of the second vector: ";
    cin >> l2;
    cout << "Enter direction of the second vector (deg): ";
    cin >> a2;
    
    a1 = deg2rad(a1);
    a2 = deg2rad(a2);
    xcomp = findXComponent(l1,l2,a1,a2);
    ycomp = findYComponent(l1,l2,a1,a2);
    result_vec_length = pythagoras(xcomp,ycomp);
    result_vec_direction = rad2deg(atan2(ycomp,xcomp)); 

    showResult(result_vec_length,result_vec_direction);
}