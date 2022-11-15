#include<iostream>
#include  "user.h"
#include "security.h"
using namespace std;

User::User(){
  name = "";
  password = "";
}
User::User(string newName, string newPassword){
  name = newName;
  password = newPassword;
}

bool User::Login(){
  if(Security::validate(name, password) == 0)
    return false;
  return true;  
}