#include<iostream>
using namespace std;

enum Note { middleC, Csharp, Cflat};

#define note2text(note) ((note == middleC) ? "middleC" : ((note == Csharp) ? "Csharp" : "Cflat")) 

#define int2note(i) ((i%3 == 0) ? middleC : ((i%3 == 1) ? Csharp : Cflat))

class Instrument {
  public:
    virtual void play(Note n) const= 0;
    virtual char* what() const =0;
};

class Wind : public Instrument{
  public:
    void play(Note n) const {cout<< "Wind::play "<< note2text(n) << "\n";}
    char* what() const {return "Wind";}
};

class Percussion : public Instrument{
  public:
    void play (Note n) const {cout << "Percussion::play " << note2text(n)<<"\n";}
    char* what() const {return "Percussion";}
};

class Stringed : public Instrument { 
  public:
    void play (Note n) const {cout << "Stringed::play "<< note2text(n) <<"\n";}
    char* what() const { return "Stringed";}
};

class Brass : public Wind{
  public:
    void play (Note n) const {cout << "Brass::play "<<note2text(n) <<"\n";}
    char* what() const {return "Brass";}
};

class Woodwind : public Wind{
  public:
    void play (Note n) const {cout << "Woodwind::play "<< note2text(n) <<"\n";}
    char* what() const {return "Woodwind";}
};





int main(){
  Instrument* A[] = {
    new Wind,
    new Percussion,
    new Stringed,
    new Brass,
    new Woodwind
  };
  
  for(int i =0; i<5; i++){
    A[i]->what();
    A[i]->play(int2note(i));
  }
  return 0;
}
