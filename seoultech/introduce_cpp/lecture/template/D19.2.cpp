#include<iostream>
#include<vector>
using std::cout;
using std::vector;

int main(){
  vector<char> container;

  container.push_back('A');
  container.push_back('B');
  container.push_back('C');
  container.push_back('D');
  
  for(int i =0; i<4; i++)
    cout<< "container[" << i<< "] == "
        << container[i] <<"\n";
  std::vector<char>::iterator p = container.begin();
  cout << "The third entry is " << container[2] <<"\n";
  cout << "The third entry is " << p[2] <<"\n";
  cout << "The third entry is " << *(p+2) <<"\n";

  cout << "Back to container[0].\n";
  p = contianer.begin();
  cout <<"which has value " <<*p <<"\n";

  cout << "Two steps forward and one step back: \n";
  p++;
  cout << *p <<"\n";
  p++;
  cout << *p <<"\n";
  p--;
  cout << *p <<"\n";
  
  return 0;
}