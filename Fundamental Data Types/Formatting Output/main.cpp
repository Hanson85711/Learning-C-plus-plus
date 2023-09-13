#include <iostream> 
#include <iomanip>


using namespace std; 

/*Exercise
Write a Program that prints a table like this (Words are left aligned, numbers are right aligned)
Course  Students
C++             100
Javascript       50*/

int printTable() {
    cout <<left <<setw(15) <<"Course" <<setw(15) <<"Students" <<endl 
         <<setw(15) <<"C++"<<right <<setw(15) <<100<<endl
         <<left<<setw(15) <<"Javascript" <<right <<setw(15) <<50;
    return 0;
}

int main() {
    printTable();
}