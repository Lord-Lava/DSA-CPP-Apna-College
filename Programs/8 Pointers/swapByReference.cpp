#include<iostream>

using namespace std;

void swap(int *a, int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

int main(){
    int a=2 , b=4;
    int *aptr=&a, *bptr=&b;

    swap(aptr,bptr);    //or simply swap(&a,&b); without having to create 2 pointers aptr and bptr.

    cout<<a<<" "<<b<<endl;

    return 0;
}