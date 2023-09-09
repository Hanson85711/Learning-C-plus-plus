#include <iostream> 

int main () {
    // Mathematical Expressions include +, -, *, /, %
    int x = 10;
    int y = 3; 
    int z = x / y; //Will give an int and not a decimal (floating point integer)
    //To see the floating point integer, need to convert either x, or y and z to double

    //% Modulus gives the remainder of a division statement 

    int a = 5; //Order of Prefix or suffix matters
    int b = a++; // b = 5, a = 6
    int c = --a; //c = 4, a = 4

    std:: cout << c;
    return 0; 
}