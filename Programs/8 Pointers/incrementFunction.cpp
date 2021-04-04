#include<iostream>

using namespace std;

void increment(int* a){
    (*a)++;                       //not *a++   refer to associativity in precedence of operators table.
    cout<<*a<<endl;
}

int main(){
    int a=2;

    increment(&a);

    cout<<a;

    return 0;
}