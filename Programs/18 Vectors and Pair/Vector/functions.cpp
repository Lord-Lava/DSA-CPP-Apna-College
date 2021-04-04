#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector<int>v1;

    for (int i=0;i<5;i++)
    {
        int x;
        cin>>x;
        v1.push_back(x);
    }

    vector<int>v2(3,0);
    
    //1 swapping

    swap(v1,v2);

    for(auto element:v1){
        cout<<element<<endl;
    }
    for(auto element:v2){
        cout<<element<<endl;
    }

    //2 sorting

    sort(v1.begin(),v1.end());  //same sort stl as array    

    return 0;
}