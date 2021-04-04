#include<iostream>

using namespace std;

void fib(int n){
    int prev=0,curr=1,temp;
    cout<<prev<<" "<<curr<<" ";
    for(int i=3;i<=n;i++){
        temp=curr;
        curr=curr+prev;
        prev=temp;
        cout<<curr<<" ";
    }
    return;
}

int main(){

    int n;
    cin>>n;

    fib(n);

    return 0;
}