#ifndef VISITOR_H
#define VISITOR_H

#include <string>
using namespace std;

#include<iostream>
using namespace std;
class Visitor{
    private:
    string name;
    int ticket;
    public:
    Visitor(string n,int t);
    Visitor();
    void display();
    ~Visitor();
    
    
};







#endif
