//property -> max till i is non-decreasing (as it is either constant or increasing).
#include<iostream>
#include<climits>

using namespace std;

void max_till_i(int n, int arr[]){
    int maxNo=INT_MIN;

    for(int i=0;i<n;i++){
        maxNo=max(maxNo,arr[i]);              
        arr[i]=maxNo;                                                                              
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

    max_till_i(n,arr);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
        }
        
    return 0;
}