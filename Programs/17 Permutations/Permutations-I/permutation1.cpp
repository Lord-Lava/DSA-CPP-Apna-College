#include <iostream>
#include<vector>

using namespace std;

vector<vector<int>> ans;

void permute(vector<int> &v, int idx){
    if (idx==v.size()){
        ans.push_back(v);
        return;
    }

    for (int i = idx; i < v.size(); i++)
    {
        swap(v[i],v[idx]);
        permute(v,idx+1);
        swap(v[i],v[idx]);
    }
    return;
}

int main(){
    int n;
    cin>>n;

    vector<int> v(n);

    for (auto &i : v)
    {
        cin>>i;
    }

    permute(v,0);

    for (auto v : ans)
    {
        for (auto i : v)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}