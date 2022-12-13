int strLen(const char str[]);
  // Pre: str contains a string value: that is, it is
  // terminated with a '\0'
  // Post: Return value is the number of characters in str
  // not counting the terminator 
int strLen(const char str[]){
  int index = 0;
  while(str[index] != '\0')
    index++;
  return index;
}

