#include<iostream>
using namespace std;

bool isSorted(int n, int arr[]){
    if(n==1){           //if array has only 1 element then it is obviously sorted.
        return true;
    }

    // bool restArray = isSorted(n-1, arr+1);
    return (arr[0]<arr[1]&&isSorted(n-1, arr+1));
}

int main(){
    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<isSorted(n,arr);

    return 0;
}