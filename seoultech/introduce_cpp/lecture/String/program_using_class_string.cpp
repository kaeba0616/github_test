//Demonstrates getline and cin.get

#include<iostream>
#include<string>
using namespace std;

void newline();

int main(){
  string firstName, lastName, recordName;
  string motto = "Your records are our records.";

  cout << "Enter your first and last name: \n";
  cin >> firstName >> lastName;
  newline();

  recordName= lastName + ", " + firstName;
  cout<< "Your name in our records is: ";
  cout<< recordName <<"\n";

  cout <<"Our motto is \n"
    <<motto <<"\n";
  cout <<"Please suggest a better (one line) motto:\n";
  getline(cin, motto);
  cout<< "our new motto will be:\n";
  cout<< motto<<"\n";
  return 0;
}

void newline(){
  char nextchar;
  do{
    cin.get(nextchar);
  }while(nextchar != '\n');
}