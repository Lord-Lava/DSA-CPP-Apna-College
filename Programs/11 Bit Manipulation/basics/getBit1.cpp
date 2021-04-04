#include<iostream>
using namespace std;

int getBit(int n, int i){
    int x=1<<i;
    if((n&x)!=0){
        return 1;
    }
    return 0;
}

int main(){
    int n , i;
    cin>>n>>i;

    cout<<getBit(n,i)<<endl;

    return 0;
}