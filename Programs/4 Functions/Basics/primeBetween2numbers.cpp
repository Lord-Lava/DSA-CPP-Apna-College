#include<iostream>
#include<math.h>

using namespace std;

bool isPrime(int n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return false; //or return 0;
        }
    }
    return true; //or return 1;
}

int main(){
    int start,end;
    cout<<"Enter starting and endind numbers of the range: ";
    cin>>start>>end;

    for(int i=start;i<=end;i++){
        if(isPrime(i)){
            cout<<i<<" ";
        }
    }


    return 0;
}