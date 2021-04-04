#include <iostream>
                   
using namespace std;

//operator overloading

class Complex{
private:
    int real, imag;
    
public:
    // Complex(){
    //     real=0;
    //     imag=0;
    // }    default constructor         https://beginnersbook.com/2014/01/parameterized-constructor-in-java-example/

    Complex(int r=0, int i=0){            //https://stackoverflow.com/questions/187640/default-parameters-with-c-constructors
        real=r;
        imag=i;
    }//constructor;

Complex operator + (Complex const &obj){
    Complex res;
    res.imag= imag + obj.imag;
    res.real = real + obj.real;
    return res;
}

void display(){
    cout<< real <<" + i"<< imag <<endl;
}

};

int main(){
   Complex c1(12,7), c2(6, 7);
   Complex c3 = c1+c2;

   c2.display();
                   
   return 0;
}