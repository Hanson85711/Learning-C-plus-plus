#include <iostream>

//Exercise: Swap Value of Two Variables

int variableswap () {
    int a = 1;
    int b = 2;
    //Swap a and b
    int temp = a; 

    a = b; 
    b = temp; 
    
    std:: cout << a;
    return 0;
}

int main () {
    int example_variable = 0;  //Initialize int for Whole Number Variable
    //IMPORTANT: Always initialize with a value in C++
    double example_decimal_variable = 9.99; //Initialize double for decimals
    example_variable = 200; 
    std:: cout << example_variable;
    return 0;
}


