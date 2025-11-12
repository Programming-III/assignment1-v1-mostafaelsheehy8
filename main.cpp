#include "Animal.h"
#include "Bird.h"
#include "Mammal.h"
#include "Reptile.h"
#include "Enclosure.h"
#include "Visitor.h"
#include <iostream>
using namespace std;




Animal:: Animal(string n,int a,bool is){
    
    name =n;
    age=a;
    isHungry=is;
}
Animal:: Animal(){
    
    name="";
    age=0;
    isHungry=0;
}

 void Animal::display(){
     
     cout<<name<<"("<<"age:"<<age<<","<<isHungry<<")"<<endl;
 }
 void Animal:: feed(){
     
     if(isHungry==1)
     cout<<"animal is hungry"<<endl;
     else 
      cout<<"animal is not hungry"<<endl;
     
 }
 Animal::~Animal(){
     
     
     
 }
   Mamal::Mamal(string n,int a,bool is,string f):Animal(n, a, is){
       
       furcolor=f;
   }
   Mamal::Mamal():Animal(){
       furcolor="";
   }

Mamal::~Mamal(){
    
}

 Bird::Bird(string n,int a,bool is,float w):Animal(n,a,is){
     wingSpan=w;
     
 }


 Bird::Bird():Animal(){
     
      wingSpan=0.0;
 }
 Bird::~Bird(){
     
     
 }
  Reptile::Reptile(string n,int a,bool is,bool isv):Animal(n,a,is){
      
      isvenomous=isv;
  }
  Reptile::Reptile():Animal(){
      isvenomous=0;
      
      
  }
Reptile::~Reptile(){
    
}


 Enclosure::Enclosure(int c){
     
     cap=c;
     count=0;
     animals=new Animal[0];
     
 }
   Enclosure::Enclosure(){
       
       cap=0;
       count=0;
        animals=new Animal[0];
     
       
   }
    void  Enclosure::addanimal(Animal*a){
        
          Animal*z=new Animal[count+1];
        for(int i=0;i<count;i++){
            z[i]=animals[i];
            
        }
        z[count]=*a;
        animals=z;
        count++;
      
        
    }
    
   void Enclosure::displayanimals(){
       cout<<cap<<endl;
       for(int i=0;i<count;i++){
           animals[i].display();
       }
       
       
   }
   
    Enclosure::~Enclosure(){
       
       delete []animals;
   }
   


 Visitor::Visitor(string n,int t){
     name=n;
     ticket=t;
 }

Visitor::Visitor(){
    
    name="";
    ticket=0;
}

void Visitor::display(){
    
    cout<<"visitor info:"<<endl<<"name:"<<name<<"ticket bought:"<<ticket<<endl;
}

 Visitor::~Visitor(){
     
     
     
 }






int main()
{
   Enclosure* e=new Enclosure();
   Animal *a=new Animal("zebra",20,1);
     Animal *d=new Animal("dog",20,1);
    Bird*b=new Bird();
     Bird*y=new Bird();
   e->addanimal(a);
   e->addanimal(d);
   e->addanimal(a);
 
   
   Visitor*v=new Visitor("mostafa",2);
   e->displayanimals();
   v->display();

    return 0;
}
