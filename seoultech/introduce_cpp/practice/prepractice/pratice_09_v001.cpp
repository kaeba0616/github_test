#include<iostream>
using namespace std;

class Student{
  public:
    Student();
    void InputData(); //input all data from user
    void OutputData();  //output classs list to console
    void ResetClasses();  //reset class list
    Student& operator =(const Student& rightSide); //assignment operator
    ~Student();
  private:
    string name;
    int numClasses;
    string *classList;
};

int main(){
  Student s1, s2;
  s1.InputData();
  cout<<"Stduent 1's data:" <<"\n";
  s1.OutputData();
  cout<<"\n";

  s2 = s1;

  cout<< "Student 2's data after assignment from studnet 1:" <<"\n";
  s2.OutputData();  //should output same data as for student 1

  s1.ResetClasses();
  cout <<"Student 1's data after reset: "<<"\n";
  s1.OutputData(); //should have no classes

  cout << "Student 2's data, should still have orginal classes: "<<"\n";
  s2.OutputData();

  cout<<"\n";
  return 0;
}

Student::Student():name(""), numClasses(0){
  classList = new string[numClasses];    
}

Student::~Student(){
  delete [] classList;
}
void Student::InputData(){
  //input all data from user
  cout<<"Enter student name."<<"\n";
  cin>> name;
  cout<<"Enter number of classes."<<"\n";
  cin>> numClasses;
  cin.ignore();
  classList = new string[numClasses];  
  for(int i=0; i<numClasses; i++){
    cout<<"Enter name of class "<<i+1<<"\n";
    getline(cin, classList[i]);
  }
  cout<< "\n";
} 
void Student::OutputData(){
  //output classs list to console
  cout<<"Name: "<<name<<"\n";
  cout<<"Number of classes: "<<numClasses<<"\n";
  for(int i=0; i<numClasses; i++)
    cout<<"  Class "<<i+1<<":"<<classList[i]<<"\n";
  cout<<"\n";
}
void Student::ResetClasses(){
  //reset class list
  numClasses = 0;
  delete [] classList;
  classList = new string[numClasses];
}

Student& Student::operator =(const Student& rightSide){
  //assignment operator
  if(numClasses != rightSide.numClasses){
    delete [] classList;
    classList = new string[rightSide.numClasses];
  }
  name = rightSide.name;
  numClasses = rightSide.numClasses;
  for(int i=0; i<numClasses; i++){
    classList[i] = rightSide.classList[i];
  }
  return *this;
}
  