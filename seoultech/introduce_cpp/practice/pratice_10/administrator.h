// **************************************************
// administrator.h

// this is the header file for the Administrator class.
// if fully fleshed out it would hae more method, but for
// purposes of this example there is a single method, login,
// which returns true if a given username and password has
// admin clearance.
// ***************************************************

#ifndef  __ADMIN_H__
#define  __ADMIN_H__

#include<string>
using namespace std;

class Administrator{
  public:
    Administrator();
    Administrator(string newName, string newPassword);
    bool Login();
  private:
    string name;
    string password;
};

#endif