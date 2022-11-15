#include <cctype>
#include <iostream>
#include <string>
using namespace std;

int main() {
  string s1, s2;
  int a[26] = {0};
  int b[26] = {0};
  cout << "Enter two strings." << '\n';
  getline(cin, s1);
  getline(cin, s2);
  for (int i = 0; i < s1.length(); i++) {
    if (s1[i] == ' ') continue;
    s1[i] = toupper(s1[i]);
    a[s1[i] - 'A']++;
  }
  for (int i = 0; i < s2.length(); i++) {
    if (s1[i] == ' ') continue;
    s2[i] = toupper(s2[i]);
    b[s2[i] - 'A']++;
  }
  bool chk = true;
  for(int i=0; i<26; i++){
    if(a[i] == b[i]) continue;
    chk = false;
  }
  if (chk){
    cout << "They are anagrams!";}
  else{ 
    cout << "They are not anagrams.";
  }
}