#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int n;
    cin>>n;

    int sum=0;
    int org=n;
    int lastdigit;
    while(n>0){
        lastdigit=n%10;
        n=n/10;
        sum = sum+lastdigit*lastdigit*lastdigit;
       
    }
    
    if(sum==org){
        cout<<"Armstrong number"<<endl;
    }
    else{
        cout<<"Not Armstrong"<<endl;
    }
   
    return 0;
}
