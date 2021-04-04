#include<iostream>

using namespace std;

void isOddEven(int n){
    if(n%2==0){
        cout<<"Even";
    }
    else{
        cout<<"Odd";
    }
    return;
}

int main(){
    int n;
    cin>>n;

    isOddEven(n);

    return 0;
}