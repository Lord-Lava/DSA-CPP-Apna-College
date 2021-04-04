//Brute-force approach.
//2 pointer method.
#include<iostream>
#include<climits>

using namespace std;

int maxSubarraySum(int n,int arr[]){
    int maxSum=INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int sum=0;
            for(int k=i;k<=j;k++){
                sum+=arr[k];
                //or here maxSum=max(sum,maxSum); checks more times for maximum if put here.
            }
            maxSum=max(sum,maxSum);
        }
    }
    return maxSum;
}

int main(){
    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<maxSubarraySum(n,arr);

    return 0;
}