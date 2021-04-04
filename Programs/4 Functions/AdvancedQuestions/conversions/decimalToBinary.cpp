#include<bits/stdc++.h>

using namespace std;

int decimalToBinary(int n){
    int ans=0;
    while(n>0){
        int rem=n%2;
        ans=ans*10+rem;
        n=n/2;
    }

    int ans2=0;
    
    while(ans>0){
        int rem =ans%10;
        ans2=ans2*10+rem;
        ans=ans/10;
    }

    return ans2;
}

int main(){
    int n;
    cin>>n;

    cout<<decimalToBinary(n);

    return 0;
}