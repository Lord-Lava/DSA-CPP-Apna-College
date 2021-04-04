#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;

    int coef=1;
    for(int i=0;i<n;i++){
        for(int s=n-i;s>=0;s--){
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
            if(j==1||j==i){
                coef=1;
            }
            else{
                coef*=(i-j+1)/j;
            }
            cout<<coef<<" ";
        }
        cout<<endl;
    }
    return 0;
}