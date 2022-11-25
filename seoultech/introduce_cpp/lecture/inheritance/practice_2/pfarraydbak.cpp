#include "pfarraydbak.h"
#include <iostream>
using std::cout;

PFArrayDBak::PFArrayDBak() : PFArrayD(), usedB(0){
  b = new double[capacity];
}

PFArrayDBak::PFArrayDBak(int capacityValue) : PFArrayD(capacityValue), usedB(0){
  b = new double[capacity];
}

PFArrayDBak::PFArrayDBak(const PFArrayDBak& oldObject) : PFArrayD(oldObject), usedB(0){
  b = new double[capacity];
  usedB = oldObject.usedB;
  for(int i=0; i<usedB; i++) b[i] = oldObject.b[i];
}

void PFArrayDBak::backup(){
  usedB =used;
  for(int i=0; i<usedB; i++)
    b[i] = a[i];
}

void PFArrayDBak::restore(){
  used = usedB;
  for(int i=0; i<used; i++)
    a[i] = b[i];
}

PFArrayDBak& PFArrayDBak::operator=(const PFArrayDBak& rightSide){
  int oldCapacity = capacity;
  PFArrayD::operator=(rightSide);
  if(oldCapacity != rightSide.capacity){
    delete [] b;
    b = new double[rightSide.capacity];
  }
  usedB = rightSide.usedB;
  for(int i=0; i<usedB; i++)  b[i] = rightSide.b[i];

  return *this;
}

PFArrayDBak::~PFArrayDBak(){
  delete [] b;
}