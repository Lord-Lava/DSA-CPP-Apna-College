//using Kadane's Algorithm. Time complexity O(n).
#include<iostream>
#include<climits>

using namespace std;

int main(){
    int n;
    cin>>n;
    
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int currSum=0;
    int maxSum=INT_MIN;

    for (int i=0; i<n; i++)
    {
        // if(arr[i]>=0){
        //     currSum+=arr[i];
        //     maxSum=max(currSum,maxSum);           //this logic works for max subsequence sum and not max subarray sum.
        // }
        currSum+=arr[i];
        maxSum=max(currSum,maxSum);          //this statement should be here and not below as the code won't work for all negative values.     

        if(currSum<0){
            currSum=0;
        }
        //Note - not here -> maxSum=max(currSum,maxSum);   X
    }
    
    cout<<maxSum<<endl;

    return 0;
}