#include <iostream>

using namespace std;

int main (){
    int n;
    cout<<"Enter n: ";
    cin>>n;

    for(int i=0; i<n;i++){
        for(int j=0;j<=i;j++)
            {
                cout<<"*";
            }
        for (int s =2*(n-i-1) ; s > 0 ; s--)
            {
                cout<<" ";
            }
        for(int j=0;j<=i;j++)
            {
                cout<<"*";
            }
        
        cout<<"\n";
    }
    
    for(int i=0; i<n;i++){
        for(int j=n-i-1;j>=0;j--)
            {
                cout<<"*";
            }
        for (int s=0 ; s<2*i ; s++)
            {
                cout<<" ";
            }
        for(int j=n-i-1;j>=0;j--)
            {
                cout<<"*";
            }
        cout<<"\n";
        }

    return 0;
}