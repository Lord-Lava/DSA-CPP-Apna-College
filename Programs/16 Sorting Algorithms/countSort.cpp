// time complexity -> O(n)

#include <iostream>

using namespace std;

void countSort(int arr[], int n){

    int k=arr[0];

    for (int i = 0; i < n; i++)
    {
        k=max(k,arr[i]);
    }

    int count[k+1]={0};

    for (int i = 0; i < n; i++)
    {
        count[arr[i]]++;
    }

    for (int i = 1; i <= k; i++)
    {
        count[i]+=count[i-1];
    }

    int output[n];

    for (int i = n-1; i >= 0; i--)
    {
        output[--count[arr[i]]]=arr[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        arr[i]=output[i];
    }
    
}

int main(){
    int n;
    cin>>n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    countSort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;

    return 0;
}