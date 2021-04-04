#include<iostream>
using namespace std;

int fibonacci(int n){

    if(n==0 || n==1){
        return n;
    }
    
    return fibonacci(n-1)+fibonacci(n-2);   //notice that the fibonacci funciton is calling itself twice here, once for (n-1) and second for (n-1).
}

int main(){
    int n;
    cin>>n;

    cout<<fibonacci(n);

    return 0;
}