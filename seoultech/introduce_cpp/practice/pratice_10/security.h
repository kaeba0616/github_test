//security.h

//This is the header file for the Security class.
// it validates  a username and password.

#ifndef __SECURITY_H__
#define __SECURITY_H__

#include <string>
using namespace std;

class Security{
  public:
    static int validate(string username, string password);
};

//this subroutine hard_codes valid users and is not
//considered a secure practice.
//it returns 0 if the credentials are invalid,
//  1 if valid user, and
//  2 if valid administrator

#endif