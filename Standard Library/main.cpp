#define _USE_MATH_DEFINES //Imports various Mathematical Constants. Declare before cmath

#include <iostream>
#include <cmath> //library for C++ mathematical functions

using namespace std;

//Exercise 
//Write a program that calculates the area of a circle based on the radius given

int circleArea () {
    cout <<"Radius: "<< endl; 
    double radius; 
    cin >> radius; 
    double areaOfCircle = M_PI * pow(radius, 2);  //M_PI C++ constant symbol for pi (Needs the define import)
    cout << "Area of Circle: " << areaOfCircle;
    return 0;    
}

int main() {
    double floorExample = floor(1.2); //Gives 1 since floor rounds down to the nearest whole number
    double powExample = pow(2, 3); //Gives 8 as it runs as 2 to the power of 3 ( 2 * 2 * 2)
    circleArea();
    return 0;
}