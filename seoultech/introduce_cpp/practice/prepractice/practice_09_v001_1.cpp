#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;

class Student{
  public:
    Student();
    ~Student();
    void InputData();
    void OutputData();
    void ResetClasses();
    Student& operator=(const Student& rightSide);
  private:
    string name;
    int numClasses;
    string *classList;
};

Student::~Student(){
  if(classList != NULL){
    delete [] classList;
  }
}

void Student::ResetClasses(){
  if(classList != NULL){
    delete[] classList;
    classList = NULL;
  }
  numClasses = 0;
}

void Student::InputData(){
  int i;
  ResetClasses();
  cout<<"Enter student name."<<"\n";
  getline(cin, name);
  cout<< "Enter number of classes."<<"\n";
  cin>>numClasses;
  cin.ignore(2,'\n');
  if(numClasses >0){
    classList = new string[numClasses];
    for(int i=0; i<numClasses; i++){
      cout<<"Enter name of class "<<(i+1)<<"\n";
      getline(cin, classList[i]);
    }
  }
  cout<<"\n";
}

void Student::OutputData(){
  int i;
  cout<< "Name: "<<name <<"\n";
  cout<< "Number of classes: "<<numClasses<<"\n";
  for(int i=0; i<numClasses; i++){
    cout<<" Class "<<(i+1)<<":"<<classList[i]<<"\n";
  }
  cout<<"\n";
}

Student& Student::operator = (const Student& rightSide){
  int i;
  ResetClasses();
  name = rightSide.name;
  numClasses = rightSide.numClasses;

  if(numClasses >0){
    classList = new string[numClasses];
    for(int i=0; i<numClasses; i++){
      classList[i] = rightSide.classList[]i;
    }
  }
  return *this;
}

int main(){
  Student s1, s2;
  s1.InputData();
  cout<< "Student 1's data:"<<"\n";
  s1.OutputData();

  cout<<"\n";

  s2 = s1;
  cout<<"Student 2's data after assignment from student 1:"<<"\n";
  s2.OutputData();

  s1.ResetClassesO();
  cout<< "Student 1's data after reset:"<<"\n";
  s1.OutputData();

  cout<<"Student 2's data, should still have original classes:"<<"\n";
  s2.OutputData();
  cout<<"\n";
  return 0;
}
