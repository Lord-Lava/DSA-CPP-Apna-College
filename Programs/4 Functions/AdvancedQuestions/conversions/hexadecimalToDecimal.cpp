#include<bits/stdc++.h>

using namespace std;

int hexadecimalToDecimal(string n){
    int ans=0;
    int s=n.size();
    int x=1;

    for(int i=s-1;i>=0;i--){
        if(n[i]>='0' && n[i]<='9'){
            ans+=(n[i]-'0')*x;              //Note n[i]-'0' since ASCII values will be taken as '0' is a character here not number.
        }
        else if(n[i]>='A' && n[i]<='F'){
            ans+=(n[i]-'A'+10)*x;           //n[i]-'A' same logic as n[i]-'0'.
        }
        x*=16;
    }

    return ans;
}

int main(){
    string n;
    cin>>n;

    cout<<hexadecimalToDecimal(n)<<endl;

    return 0;
}