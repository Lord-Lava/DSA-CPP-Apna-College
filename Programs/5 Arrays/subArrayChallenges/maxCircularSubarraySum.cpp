//time complexity = O(n).
#include<iostream>
#include<climits>

using namespace std;

int kadane(int n,int arr[]){
    int currSum=0;
    int maxSum=INT_MIN;

    for(int i=0;i<n;i++){
        currSum+=arr[i];
        maxSum=max(currSum,maxSum);
        if(currSum<0){
            currSum=0;
        }
    }
    return maxSum;
}

int main(){
    int n;
    cin>>n;

    int arr[n];
    int totalSum=0;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int nonWrapSum=kadane(n,arr);

    for(int i=0;i<n;i++){
        totalSum+=arr[i];
        arr[i]=-arr[i];
    }

    int wrapSum=totalSum+kadane(n,arr);

    cout<<max(wrapSum,nonWrapSum)<<endl;

    return 0;
}