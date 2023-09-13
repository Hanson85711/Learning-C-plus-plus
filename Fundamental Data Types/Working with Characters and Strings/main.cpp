#include <iostream> 
#include <string>


using namespace std; 
/*Exercise
Write a Program that asks the user a series of questions
like street, city, state and zip code and then prints
the user's address using this format: 
Street
City, State, ZipCode */

int askUserAddress() {
  string Street;
  string City;
  string State;
  string ZipCode;
  
  cout << "Enter your Street: ";
  getline(cin, Street);         
  //Defined in header <string>, reads all characters from input spaces included and places into string
  //Reason being is a standard cin does not read any characters after and including a space
  cout << "Enter your City: ";
  getline(cin, City);
  cout << "Enter your State:";
  getline(cin, State);
  cout<< "Enter your Zip Code:";
  getline(cin,ZipCode);
  cout<<Street<<endl 
      <<City<<", "<<State<<", "<<ZipCode; 
  return 0;
}

int main() {
  askUserAddress();
}