#include <iostream>

//Order of Operation rules operate as in real life. 
//* and / get evaluated before + and - 
//Operations in () gets evaluated first
int main () {
    double x = 10; 
    double y = 5;

    double z = (x + 10) / (3 * y) ;

    std:: cout << z; 
    return 0;
}