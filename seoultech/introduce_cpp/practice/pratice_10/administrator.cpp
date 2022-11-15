#include<iostream>
using namespace std;
#include "administrator.h"
#include "security.h"

Administrator::Administrator(){
  name = "";
  password = "";
}

Administrator::Administrator(string newName, string newPassword){
  name = newName;
  password = newPassword;
}

bool Administrator::Login(){
  if(Security::validate(name, password) != 2)
    return false;
  return true;
}

