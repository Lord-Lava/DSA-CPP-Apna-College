//time complexity O(n).
//NOTE-> only works for sorted array.

#include<iostream>

using namespace std;

bool pairSum(int n,int arr[],int S){
    int low=0;
    int high=n-1;

    while(low<high){
        if(arr[low]+arr[high]==S){
            cout<<low<<" "<<high<<endl;
            return true;
        }
        else if(arr[low]+arr[high]<S){
            low++;
        }
        else{
            high--;
        }
    }
    return false;
}

int main(){
    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int S;
    cin>>S;

    cout<<pairSum(n,arr,S);

    return 0;
}