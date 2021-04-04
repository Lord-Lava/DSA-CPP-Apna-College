#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if(j==1||j==i)
                cout<<"*";
            else
                cout<<" ";
            
        }
        for(int s=2*(n-i);s>=1;s--){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            if(j==1||j==i)
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
    }

    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            if(j==1||j==i)
                cout<<"*";
            else
                cout<<" ";
        }
        for(int s=2*(n-i);s>=1;s--){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
           if(j==1||j==i)
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
    }

    return 0;
}