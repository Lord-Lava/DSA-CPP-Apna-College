//declaring a pointer which points to another pointer.

#include<iostream>

using namespace std;

int main(){
    int a=10;
    int *p;
    p=&a;

    cout<<*p<<endl;

    int **q=&p;
    cout<<*q<<endl;       //prints value of address of p.
    cout<<**q<<endl;     //prints value of a as it is dereferenced twice.

    return 0;
}