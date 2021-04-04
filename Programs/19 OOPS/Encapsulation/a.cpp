#include <iostream>
                   
using namespace std;

class A{
public:
    int a;
    void funcA(){
        cout<<"Func A"<<endl;
    }
private:
    int b;
    void funcB(){
        cout<<"Func B"<<endl;
    }
protected:
    int c;
    void funcC(){
        cout<<"Func C"<<endl;
    }
};
                   
int main(){
    A obj;
    obj.funcA();
    obj.a=2;

    // obj.funcB(); can't do this.

    cout<<obj.a;
                   
   return 0;
}