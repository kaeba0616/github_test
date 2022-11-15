#include<iostream>
using namespace std;

namespace Hello{
  void message();
}

namespace Goodbye{
  void message();
}

void message();

int main(){
  message();
  using Goodbye::message;
  {
    using Hello::message;
    message();
    Goodbye::message();
  }
  message();
  return 0;
}

void message(){
  cout <<"Global meesage.\n";
}

namespace Hello{
  void message(){
    cout <<"Hello.\n";
  }
}

namespace Goodbye{
  void message(){
    cout<< "Good-bye.\n";
  }
}