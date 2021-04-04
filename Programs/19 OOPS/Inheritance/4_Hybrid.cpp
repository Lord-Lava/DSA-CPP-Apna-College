#include <iostream>
                   
using namespace std;

class A{
    public:
    void Afunc(){
        cout<<"Func A"<<endl;
    }
};

class B : public A{
    public:
    void Bfunc(){
    cout<<"Func B"<<endl;
    }
};

class C{
    public:
    void Cfunc(){
    cout<<"Func C"<<endl;
    }
};

class D : public B, public C{
public:
};
                   
int main(){
   D d;
   d.Afunc();
   d.Bfunc();
   d.Cfunc();
                   
   return 0;
}