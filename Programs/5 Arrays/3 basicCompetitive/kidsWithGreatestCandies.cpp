#include<iostream>
#include<climits>

using namespace std;

int main(){
    int extraCandies;
    // cout<<"Enter number of extra candies: ";
    cin>>extraCandies;

    int n;
    cin>>n;

    int candies[n];

    for(int i=0;i<n;i++){
        cin>>candies[i];
    }

    int maxCandy=INT_MIN;

    for(int i=0;i<n;i++){
        maxCandy=max(maxCandy,candies[i]);
    }

    bool check[n];
    for(int i=0;i<n;i++){
        if(candies[i]+extraCandies>=maxCandy){
            check[i]=true;
        }
        else{
            check[i]=false;
        }
    }

    for(int i=0;i<n;i++){
        cout<<check[i]<<" ";
    }

    return 0;
}