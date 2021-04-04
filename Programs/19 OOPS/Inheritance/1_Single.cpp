#include <iostream>
                   
using namespace std;

class A{
    public:
    void func(){
        cout<<"Inherited";
    }
};

class B: public A{
};
                   
int main(){
   B b;
   b.func();
                   
   return 0;
}