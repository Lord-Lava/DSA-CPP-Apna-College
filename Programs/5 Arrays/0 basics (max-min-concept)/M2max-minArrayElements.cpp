#include<iostream>
#include<limits.h>   //or #include <climits> (for including INT_MAX and INT_MIN)

using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int maxNo=INT_MIN;             //INT_MAX gives maximum value of integer possible. 
    int minNo=INT_MAX;             //INT_MIN gives minimum value of integer possible.

    for(int i=0;i<n;i++){
        maxNo=max(maxNo,arr[i]);
        minNo=min(minNo,arr[i]);
    }
    
    cout<<"\nMaximum Element: "<<maxNo<<" "<<"\nMinimum Element: "<<minNo<<endl;

    return 0;
}