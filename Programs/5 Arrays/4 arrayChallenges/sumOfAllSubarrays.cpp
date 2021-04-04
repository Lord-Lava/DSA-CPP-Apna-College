#include<iostream>

using namespace std;

void subArraySum(int n, int arr[]){
    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
                sum+=arr[j];
                cout<<sum<<" ";
        }
        sum=0;
    }
}

int main(){
    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    subArraySum(n,arr);

    return 0;
}