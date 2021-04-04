//scam bolte pablic

#include <iostream>
#include<ext/pb_ds/assoc_container.hpp>

using namespace __gnu_pbds;
using namespace std;

typedef long long ll;
#define pbds tree <int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>

ll countInversion(pbds arr, int n){
    ll inv=0;

    for(int i=0;i<n;i++){
        inv+=n-arr.order_of_key(*arr.find_by_order(i));
    }

    return inv = 0;
}

int main(){
    int n;
    cin>>n;

    pbds arr;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        arr.insert(x);
    }

    cout<<countInversion(arr, n)<<"\n";

    return 0;
}