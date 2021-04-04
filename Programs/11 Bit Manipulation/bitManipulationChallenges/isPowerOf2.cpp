#include<iostream>

using namespace std;

bool isPowerOf2(int n){
    return (n&&!(n&n-1));     //n && () is used to handle the corner case/ base case when n=0 in which case the return value will be 0/false. 
}

int main(){
    int n;
    cin>>n;
    cout<<isPowerOf2(n);

    return 0;
}