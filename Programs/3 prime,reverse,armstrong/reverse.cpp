#include<iostream>

using namespace std;

int main(){
    int n,rev=0,org=n;
    cin>>n;

    while (n>0){
        int rem = n%10;
        rev= rem + rev*10;
        n = n/10;
    }
    cout<<rev;

    return 0;
}