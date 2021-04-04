#include<iostream>

using namespace std;

int numberOfOnes(int n){
    int count=0;
    while(n){               //same as while(n!=0)
        n= n& (n-1);
        count++;
    }
    return count;
}

int main(){
    int n;
    cin>>n;

    cout<<numberOfOnes(n);

    return 0;
}