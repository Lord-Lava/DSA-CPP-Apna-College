//asked in Amazon, Oracle.
#include<iostream>
#include<climits>

using namespace std;

int main(){
    int t;
    cin>>t;

while(t--){         //here when t-- = 0 => false in while and hence loop will exit.
    
    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    const int N=1e6+2;          //bada size lene pe computer ka gaand fat jata h toh compile nhi hota isiliye ghabrayein na agar run na ho.

    int idx[N];

    for(int i=0;i<N;i++){
        idx[i]=-1;
    }

    int minidx=INT_MAX;

    for(int i=0;i<n;i++){
        if(idx[arr[i]]!=-1){
            minidx=min(minidx,idx[arr[i]]);
        }
        else{
            idx[arr[i]]=i;      //NOTE-> This technique is called Hashing.
        }
    }

    if(minidx==INT_MAX){
        cout<<"-1"<<endl;
    }

    else{
        cout<<minidx+1<<endl;
    }
}

    return 0;
}