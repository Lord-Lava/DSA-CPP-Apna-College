#include <iostream>

using namespace std;

int main(){
int n;
cout << "Enter n: ";
cin>>n;

for(int i=1;i<=n;i++){
    int j;
    int a=i;
    for(int j=n-i;j>=1;j--){
        cout<<" ";
    }
    
    for(j=1;j<=i;j++){
        cout<<a--;
        }
    a=2;
    for(j=1;j<i;j++){
        cout<<a++;
        }
    cout<<endl;
}


return 0;
}