#ifndef BIRD_H
#define BIRD_H

#include "Animal.h"


#include<iostream>
using namespace std;
class Bird:Animal{
    private:
    float wingSpan;
    public:
    Bird();
    Bird(string n,int a,bool is,float w);
    ~Bird();
};






#endif
