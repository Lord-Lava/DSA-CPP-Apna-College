#include<iostream>

using namespace std;

int main(){
    int a=10;
    int* aptr=&a;

    cout<<a<<endl;
    cout<<&a<<endl;
    cout<<aptr<<endl;
    cout<<*aptr<<endl;

    //modifying variable values using pointers.
    *aptr=20;    //previously 10.
    cout<<a<<endl;

    return 0;
}