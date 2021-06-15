//Q. minimum number of numbers needed such that the sum of their squares 
// is n

// M-I-> Top down approach / memoization.

#include <bits/stdc++.h>

const int N = 1e5+2, MOD = 1e9+7;

using namespace std;

int dp[N];

int MinSquare(int n){
    if(n==0 || n==1 || n==2 || n==3){
        return n;
    }

    if(dp[n]!=MOD){
        return dp[n];
    }

    for(int i =1 ;i*i<=n;i++){
        dp[n] = min(dp[n], 1+MinSquare(n-i*i));
    }
    
    return dp[n];
}

int main(){
    int n;
    cin>>n;

    for (int i = 0; i < N; i++)
    {
        dp[i] = MOD;
    }
    
    cout<<MinSquare(n)<<endl;

    return 0;
}