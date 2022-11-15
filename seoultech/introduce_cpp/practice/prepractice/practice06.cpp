#include<iostream>
using namespace std;

class HotDogStand{
  public:
    HotDogStand();
    HotDogStand(int newID, int newNnumSold);
    int GetID();
    void SetID(int newID);
    void JustSold();
    int GetNumSold();
    void SetNumSold(int newNumSold);
    static int GetTotalSold();
  private:
    static int totalSold;
    int numSold;
    int ID;
};

int HotDogStand::totalSold =0;

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);

  HotDogStand S1(1, 0), S2(2,0),S3(3,0);
  S1.JustSold();
  S2.JustSold();
  S1.JustSold();

  cout<<"Stand "<<S1.GetID()<<" sold "<<S1.GetNumSold()<<"\n";
  cout<<"Stand "<<S2.GetID()<<" sold "<<S2.GetNumSold()<<"\n";
  cout<<"Stand "<<S3.GetID()<<" sold "<<S3.GetNumSold()<<"\n";
  cout<<"Total sold = "<<S1.GetTotalSold()<<"\n\n";

  S3.JustSold();
  S1.JustSold();

  cout<<"Stand "<<S1.GetID()<<" sold "<<S1.GetNumSold()<<"\n";
  cout<<"Stand "<<S2.GetID()<<" sold "<<S2.GetNumSold()<<"\n";
  cout<<"Stand "<<S3.GetID()<<" sold "<<S3.GetNumSold()<<"\n";
  cout<<"Total sold = "<<S1.GetTotalSold()<<"\n\n";
}

HotDogStand::HotDogStand(){
  numSold =0;
  ID=0;
}

HotDogStand::HotDogStand(int newID, int newNumSold){
  numSold =newNumSold;
  ID=newID;
}

void HotDogStand::SetID(int newID){
  ID = newID;
}

void HotDogStand::SetNumSold(int newNumSold){
  numSold = newNumSold;
}

void HotDogStand::JustSold(){
  totalSold++;
  numSold++;
}

int HotDogStand::GetID(){
  return ID;
}

int HotDogStand::GetNumSold(){
  return numSold;
}


int HotDogStand::GetTotalSold(){
  return totalSold;
}