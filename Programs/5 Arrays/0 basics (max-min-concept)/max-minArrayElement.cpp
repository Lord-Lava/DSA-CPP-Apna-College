#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    
    int arr[n];

    for(int i=0;i<n;i++){     //Enter array elements
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){     // Display array elements
        cout<<arr[i]<<" ";
    }

    int max=arr[0],min=arr[0];

    for(int i=0;i<n;i++){
        if(arr[i]>=max){       //compare maximum
            max=arr[i];
        }
        
        if(arr[i]<=min){       //compare minimum    
            min=arr[i];
        }
    }

    cout<<"\nMaximum element: "<<max<<endl;
    cout<<"Minimum element: "<<min<<endl;

    return 0;
}