#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,k; 
    cin>>n>>k;

    vector<int>a(n);

    for (auto &i : a)
    {
        cin>>i;
    }

    vector<int>v;

    for (int i = 0; i < k; i++)
    {
        v.push_back(a[i]);
    }

    sort(v.begin(),v.end(),greater<int>());

    int a = v[0];
    int b = v[1];

    for (int i = 1; i < n; i+=k)
    {
        
    }
    
    

    
    
    



    return 0;
}