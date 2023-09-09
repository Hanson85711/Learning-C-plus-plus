#include <iostream>

using namespace std; //declaring this namespace to avoid repetion. No need to type it again for any std functions

//Exercise 
//Write a function that shows your sales, state and county tax, and total tax you need to pay
//Sales = $95,000, State Tax = 4%, County Tax = 2%
int SalesTax() {
    double sales = 95000; //For Monetary Value use a double
    
    const double stateTaxRate = 0.04;
    double stateTax = sales * stateTaxRate;
    
    const double countyTaxRate = 0.02;
    double countyTax = sales * countyTaxRate;

    double totalTax = stateTax + countyTax;

    cout <<"Sales: $" << sales <<endl
         <<"State Tax: $" << stateTax <<endl
         <<"County Tax: $" << countyTax <<endl
         <<"Total Tax: $" << totalTax;
    
    return 0; 
}

int main() {
    int x = 10;
    int y = 10;

    cout <<"x = " << x << endl //endl to end the cout line, add << to append new variable types
         <<"y = " << y << endl;

    SalesTax(); 
    return 0; 
}