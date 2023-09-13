#include <iostream> 
#include <string>


using namespace std; 

/*Exercise
Ask the user for 3 names. Store these names in an array and print 
the first name*/

int threeNames() {

  string names[3]; 
  
  cout<<"Gimme 3 names: ";
  getline(cin,names[0]);
  getline(cin,names[1]);
  getline(cin,names[2]);
  
  cout<<names[0]<<endl;

  return 0;
}

int main() {
  threeNames();
}