//asked in Google kickstart.
#include<iostream>
#include<climits>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
    
    int n;
    cin>>n;

    int arr[n];
    
    int rbd=0;
    int maxNo=INT_MIN;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

        for(int i=0;i<n;i++){
                if(arr[i]>maxNo){
                    maxNo=arr[i];
                if(i==n-1 || arr[i+1]<arr[i]){
                        rbd++;
                    }
                }
            }
            cout<<rbd;
    }

return 0;
}