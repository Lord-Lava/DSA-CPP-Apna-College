#include<iostream>
using namespace std;

int uniqueNumber(int n,int arr[]){
    int xorSum=0;
    for(int i=0;i<n;i++){
        xorSum^=arr[i];
    }

    return xorSum;
}

int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<uniqueNumber(n,arr);

    return 0;
}