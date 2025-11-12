#ifndef MAMMAL_H
#define MAMMAL_H

#include "Animal.h"

#include<iostream>
using namespace std;

class Mamal:public Animal{
    private:
    string furcolor;
    Mamal(string n,int a,bool is,string f);
    Mamal();
    ~Mamal();
};






#endif
