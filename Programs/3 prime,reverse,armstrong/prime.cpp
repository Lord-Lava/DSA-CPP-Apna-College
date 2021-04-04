#include <iostream>
#include<math.h>

using namespace std;

int main(){
    
    int n;
    cin>>n;
    int i;
    bool flag=1;
    

    for(i=2;i<=sqrt(n);i++){
        if(n%i==0){
            cout<<"Not a prime";
            flag=0;
            break;
        }
    }

    if(flag==1){
        cout<<"Prime";
    }

    return 0;
}