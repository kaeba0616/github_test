#include<cctype>
...
char next;
cout << "Enter a line of text : \n";
do{
  cin.get(next);
  if(!isupper(next))
    cout << next;
}while(next != '\n');                   