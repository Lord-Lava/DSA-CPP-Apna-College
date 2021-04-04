//We can increment,decrement,add,subtract pointers.
//++,--,+,-.

#include<iostream>
using namespace std;

int main(){
    int a=10;
    int *aptr = &a;
    cout<<aptr<<endl;

    aptr++;             //Note here that the address value here will be incremented by 4 not 1 
    cout<<aptr<<endl;  //because of size of int as aptr is of int type. (char -> 1 bool->1).

    aptr+=2;            //similarly address incremented by 8 here.
    cout<<aptr<<endl;

    return 0;
}