#ifndef REPTILE_H
#define REPTILE_H

#include "Animal.h"

#include<iostream>
using namespace std;

class Reptile:public Animal{
    
    private:
    bool isvenomous;
    public:
    Reptile(string n,int a,bool is,bool isv);
    Reptile();
    ~Reptile();
    
    
};









#endif
