//time complexity O(n^2).
#include<iostream>

using namespace std;

void swap(int i,int j,int arr[]){
    int temp = arr[j];
    arr[j]=arr[i];
    arr[i]=temp;
}

void selectionSort(int n, int arr[]){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                swap(i,j,arr);
            }
        }
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

    selectionSort(n,arr);

        for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}