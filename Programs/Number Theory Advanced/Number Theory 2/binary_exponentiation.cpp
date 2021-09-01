#include <bits/stdc++.h>
using namespace std;

#define int long long
const int mod = 1e9 + 7;

//iterative
int power(int a,int n){
    a%=mod;
    int ans = 1;
    while(n){
        if(n&1){
            ans=(ans*a)%mod; 
        }
        a=(a*a)%mod;
        n=n>>1;
    }
    return ans;
}

//recursive
int powerR(int a,int n){
    a%=mod;
    if(n==0){
        return 1;
    }
    int x = (power(a,n/2)%mod);
    if(n&1){
        return (((x*x)%mod)*a)%mod;
    }
    return (x*x)%mod;
}

signed main(){
    int a,n;
    cin>>a>>n;

    cout<<power(a,n)<<endl;

    return 0;
}