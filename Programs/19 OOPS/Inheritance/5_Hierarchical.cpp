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

class C: public A{
    public:
    void Cfunc(){
        cout<<"Func C"<<endl;
    }
};

class D : public B{
    public:
    void Dfunc(){
        cout<<"Func D"<<endl;
    }
};

class E: public B{
    public:
    void Efunc(){
        cout<<"Func E"<<endl;
    }
};

class F : public C{
    public:
    void Ffunc(){
    cout<<"Func F"<<endl;
    }
};

class G: public C{
    public:
    void Gfunc(){
    cout<<"Func G"<<endl;
    }
};
                   
int main(){
   //D and E inherits from B and A 
   D d;
   d.Afunc();
   d.Bfunc();
   
   //F and G inherits from C and A
   F f;
   f.Cfunc();
   f.Afunc();
                   
   return 0;
}