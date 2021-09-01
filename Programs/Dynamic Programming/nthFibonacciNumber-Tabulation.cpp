#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;

    if(n<=1){
        return n;
    }

    int dp[n+1];
    memset(dp,-1,sizeof(dp));   //initializing dp by -1 (not necessary for this particular problem)

    dp[0] = 0;
    dp[1] = 0;
    dp[2] = 1;

    for (int i = 3; i < n+1; i++)
    {
        dp[i] = dp[i-1] + dp[i-2];
    }

    cout<<dp[n]<<endl;

    return 0;
}