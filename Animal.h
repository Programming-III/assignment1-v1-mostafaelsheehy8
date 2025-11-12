#indief "ANIMAL_H"
#define"ANIMAL_H"

#include<iostream>
using namespace std;

class Animal{
    protected:
    string name;
    int age;
    bool isHungry;
    public:
    Animal(string n,int a,bool is);
    Animal();
    void display();
    void feed();
    ~Animal();
    
    
};
#endif
