//time complexity O(n^2).
#include<iostream>

using namespace std;

void insertionSort(int n, int arr[]){
    for(int i=1;i<n;i++){
        int curr=arr[i];
        int j=i-1;
        while(curr<arr[j] && j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=curr;
    }
    return;
}

int main(){
    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    insertionSort(n,arr);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}