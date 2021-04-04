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

        while(j<n){             //NOTE- executing only this while loop will satisfy the answer, 
            sum+=arr[j];       //but time limit will be exceded till O(n^2) in the worst case. 
            while(sum>S){     //since the addition in sum loops n times and so does the substraction in sum.
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