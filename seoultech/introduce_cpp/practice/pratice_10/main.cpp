#include<iostream>
#include<string>
#include "user.h"
#include "administrator.h"
using namespace std;

//Main method
int main(){
  //  Hard-coded tests. Abbott has User access, Costello has
  //  user and admin access.
  User user1("abbott", "monday"), user2("lynn","guini"),
      user3("costello", "tuesday");
  Administrator admin1("abbott", "monday"), admin2("kerry","oki"),
      admin3("costello", "tuesday");
  cout << "Resuts of login: "<<"\n";
  cout << "User login for abbott: " <<user1.Login()<<"\n";
  cout << "User login for lynn: " <<user2.Login()<<"\n";
  cout << "User login for costello: " <<user3.Login()<<"\n";
  cout << "Admin login for abbott: " <<admin1.Login()<<"\n";
  cout << "Admin login for lynn: " <<admin2.Login()<<"\n";
  cout << "Admin login for costello: " <<admin3.Login()<<"\n";

  return 0;
}