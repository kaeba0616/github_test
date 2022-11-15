// **************************************************
// user.h

// this is the header file for the user class.
// if fully fleshed out it would have more method, but for
// purposes of this example there is a single method, Login,
// which returns true if a given username and password has
// user clearance.
// ***************************************************

// ----------------------------
// ----ENTER YOUR CODE HERE----
// ----------------------------

#ifndef __USER_H__
#define __USER_H__

#include<string>
using namespace std;

class User{
  public:
    User();
    User(string newName, string newPassword);
    bool Login();
  private:
    string name;
    string password;
};

#endif