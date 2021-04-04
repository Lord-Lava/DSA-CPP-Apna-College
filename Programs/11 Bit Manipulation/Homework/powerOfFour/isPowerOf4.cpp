#include<iostream>
using namespace std;

bool isPowerOfFour(int n){
    
    for(int i=0;i<n;i+=2){
        if(n&((2<<i))){
            return 0;
        }
    }
    
    return (n&& (!(n&(n-1))));
}

int main(){
    int n;
    cin>>n;

    cout<<isPowerOfFour(n);

    return 0;
}