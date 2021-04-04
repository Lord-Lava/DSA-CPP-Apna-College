//asked in Amazon, Samsung, Snapdeal, Accolite.
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

        const int N=100;        //should be N=1e6+2 but compiler not able to handle so did 100.  

        bool idx[N];

        for(int i=0;i<N;i++){
        idx[i]=false;                   //can use 0 in place of false and 1 in place of true.
        }
        
        for(int i=0;i<n;i++){
            if(arr[i]>=0){
                idx[arr[i]]=true;
            }
        }

        for(int i=0;i<N;i++){
            if(idx[i]==false){
                cout<<i<<endl;
                break;
            }
        }
    }
    return 0;
}

//NOTE-> Present sir Absent sir analogy used.