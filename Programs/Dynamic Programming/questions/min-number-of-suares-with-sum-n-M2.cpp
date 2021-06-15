//M-2 Bottom up approach / Tabulation.
#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+2 , MOD = 1e9+7;

int main(){
    int n;
    cin>>n;

    vector<int>dp(n+1,MOD);

    //base cases
    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 3;

    for (int i = 1; i*i<=n ; i++)
    {
        for(int j=0; i*i+j<=n; j++){
            dp[i*i + j] = min(dp[i*i + j], 1+dp[j]);
        }
    }
    
    cout<<dp[n]<<endl;

    return 0;
}