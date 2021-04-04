//time complexity O(n^2).
#include<iostream>

using namespace std;

bool pairSum(int n,int arr[],int S){
for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==S){
                cout<<i<<" "<<j<<endl;
                return true;
            }
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