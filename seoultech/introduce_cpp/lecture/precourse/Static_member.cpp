#include<iostream>
using namespace std;

class server{
  public :
    server (char letterName);
    void serveOne();
    static bool stillOpen();
  private:
    static int turn;
    static int lastServed;
    static bool nowOpen;
    char name;
};


int server::turn=0;
int server::lastServed =0;
bool server::stillOpen = true;

int main(){
  server s1('A'), s2('B');
  int number, count;
  do{

    cout<< "How many in your group?";
    cint>>number;
    cout<<"Your turns are: ";
    for(count =0; count <number; count++)
      cout<<Server::getTurn() <<" ";
    cout<<"\n";
    s1.serveOne();
    s2.serveOne();
  }while(server::stillOpen());

  cout<<"Now closing service.\n";
  return 0; 
}

server::server(char letterName) : name(letterName){}

int server::getTurn(){
  turn++
  return turn;
}
bool server::stillOpen(){
  return nowOpen;
}

void server::serveOne(){
  if (nowOpen && lastserved <turn){
    lastserved++;
    cout<<"Server" <<name<<" now serving "<<lastServed<<"\n";
  }
  if(lastServed>=turn)  nowOpen =false;
}