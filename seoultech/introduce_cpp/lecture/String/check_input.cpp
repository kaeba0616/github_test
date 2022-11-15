#include<iostream>
using namespace std;

vold newline();

int main(){
  int n;
  getint(n);
  cout<<"Final value read in = "<<n<<"\n"
    <<"End of demonstration.\n";
  return 0;
}

void newline(){
  char symbol;
  do{
    cin.get(symbol);
  }while(symbol != '\n');
}

void getint(int& number){
  char ans;
  do{
    cout<<"Enter input number: ";
    cin >> number;
    cout << "You entered "<< number
      << " is that correct? (yes/no): ";
    cin >> ans;
    newline();
  }while((ans == 'N') || (ans == 'n'));
}