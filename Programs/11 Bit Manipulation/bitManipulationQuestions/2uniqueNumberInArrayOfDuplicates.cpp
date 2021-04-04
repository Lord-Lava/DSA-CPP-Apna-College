#include<iostream>
using namespace std;

int setBit(int n, int pos){
    return ((n & (1<<pos))!=0);
}

void uniqueNumber(int n,int arr[]){
    int xorSum=0;

    for(int i=0;i<n;i++){
        xorSum^=arr[i];
    }

    int tempXor=xorSum;
    int setbit=0;
    int pos=0;

    while(setbit!=1){
        setbit=xorSum&1;
        pos++;
        xorSum>>=1;
    }

    int newXor=0;
    for(int i=0;i<n;i++){
        if(setBit(arr[i],pos-1)){
            newXor^=arr[i];
        }
    }

    cout<<newXor<<endl;
   
    cout<<(tempXor^newXor)<<endl;

}

int main(){
    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    uniqueNumber(n,arr);

    return 0;
}