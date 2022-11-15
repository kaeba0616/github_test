#include<iostream>
#include<string>
using namespace std;

unsigned int my_strlen(const char *s)
{
  unsigned int count =0;
  while(*s! = '\0'){
    count++;
    s++;
  }
  return count;
}