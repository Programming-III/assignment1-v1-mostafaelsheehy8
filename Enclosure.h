#ifndef ENCLOSURE_H
#define ENCLOSURE_H

#include "Animal.h"





#include<iostream>
using namespace std;

class Enclosure{
    protected:
    Animal*animals;
    int cap;
    int count;
    public:
    Enclosure(int c);
    Enclosure();
   
   void addanimal(Animal*a);
   void displayanimals();
    ~Enclosure();
    
};









#endif
