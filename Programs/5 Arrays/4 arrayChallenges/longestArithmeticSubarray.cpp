//asked in Google kickstart.
#include<iostream>

using namespace std;

int longestArithmeticSubarray(int n,int arr[]){
    int ans=2;
    int pd=arr[1]-arr[0];
    int curr=2;
    int j=2;

    while(j<n){
        
        if(pd==arr[j]-arr[j-1]){
            curr++;
        }
        else{
            pd=arr[j]-arr[j-1];
            curr=2;
        }
        ans=max(ans,curr);
        j++;
    } 

    return ans;
}

int main(){
    int testcase;           //test case variable used to input multiple testcases at once and see their repective outputs.
    cin>>testcase;
    
    while(testcase--){     //using this while loop for multiple testcase inputs. Here when testcase-- = 0 => false in while and hence loop will exit.

    int n;
    cin>>n;

         
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<longestArithmeticSubarray(n,arr)<<endl;

    }

    return 0;
}