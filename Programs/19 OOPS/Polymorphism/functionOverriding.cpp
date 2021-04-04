#include <iostream>
                   
using namespace std;

class base{
public:
    virtual void print(){
        cout<<"This is the base class's print function"<<endl;
    }

    void display(){
        cout<<"This is the base class's display function"<<endl;
    }
};

class derived: public base{
public:
    void print(){
        cout<<"This is the derived class's print function"<<endl;
    }

    void display(){
        cout<<"This is the derived class's display function"<<endl;
    }
};
                   
int main(){
   base *baseptr;
   derived d;
   baseptr = &d;    

   baseptr -> print();      //arrow operator (->) is used to access objects through pointer instead of the dot (.) operator

   baseptr -> display();
                   
   return 0;
}

// Note-> The object is getting dynamically binded here i.e. binding happens at runtime rather than compile time
// i.e. inheritance happens at runtime after we specify the pointer to point at derived class's address.