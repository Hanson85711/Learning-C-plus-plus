#include <iostream> 

using namespace std; 

//Exercise
//Write a program that receives user input of a temperature in fahrenheit and converts it to celsius

int temperatureConversion() {
    cout <<"Enter a temperature in Fahrenheit: ";
    double temperature; 
    cin >> temperature; 
    double convertedCelsius = (temperature - 32) / 1.8;
    cout << "Celsius: " << convertedCelsius;
    return 0; 
}

int main() {
    cout <<"Enter values for x and y: ";
    double x; 
    double y;
    cin >> x >> y; //cin for getting user input where >> notation receives data from user input and passes it to the console
    cout << x + y << endl;

    temperatureConversion();
    return 0; 
}