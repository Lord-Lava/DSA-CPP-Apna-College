//asked in Google, Amazon, Facebook and Visa.
#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int arr[n];

        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        int S;
        cin>>S;

        int sum=0;
        int j=0;
        int i=0;
        
        while (j<n && sum+arr[j]<=S)  //this while loop is used to reduce the time complexity to O(n).
        {                            //as this loop leads the j to already iterate over some part and only the rest part of the array is left to be iterated over.
            sum+=arr[j];            //thus reducing the need to start iterating from the beginning again which leads to O(n^2) time complexity as in MyApproach to this problem.
            j++;
        }
        
        while(j<n){             
            sum+=arr[j];        
            while(sum>S){     
                sum-=arr[i];
                i++;
            }

            if(sum==S){
                cout<<i+1<<" "<<j+1<<" ";
                break;
            }

            j++;
        }
    }
    return 0;
}