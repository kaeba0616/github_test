#ifndef PFARRAYD_H
#define PFARRAYD_H

class PFArrayD{
  public:
    PFArrayD();
    PFArrayD(int capacityValue);
    PFArrayD(const PFArrayD& pfaObject);
    void addElement(double element);
    bool full()const;
    int getCapacity()const;
    int getNumberUsed()const;
    void emptyArray();
    //resets the number use to zero, effectively emptying the array.
    double& operator[] (int index);
    //Read and change access to elements 0 through numberUsed -1.

    PFArrayD& operator =(const PFArrayD& rightSide);
    ~PFArrayD();
  protected:
    double *a;
    int capacity;
    int used;
};

#endif