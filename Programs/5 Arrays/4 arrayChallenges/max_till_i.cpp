//property -> max till i is non-decreasing (as it is either constant or increasing).
#include<iostream>
#include<climits>

using namespace std;

void max_till_i(int n, int arr[]){
    int maxArr[n];
    int maxNo=INT_MIN;

    for(int i=0;i<n;i++){
        maxArr[i]=0;
        for(int j=0;j<=i;j++){
            maxNo=max(maxNo,arr[j]);                //or if(arr[j]>maxNo){
            maxArr[i]=maxNo;                       //       maxNo=arr[j];                      
            }                                     //      }   
        }

    for(int i=0;i<n;i++){
        cout<<maxArr[i]<<" ";
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

    return 0;
}