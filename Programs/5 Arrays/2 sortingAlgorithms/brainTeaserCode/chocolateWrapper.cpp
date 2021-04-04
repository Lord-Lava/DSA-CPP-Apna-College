//Hackerrank (easy) ~=90% success.

#include<iostream>

using namespace std;

int main(){
    int cost,wrapperCost,budget,noOfChocolates;
    cin>>cost>>wrapperCost>>budget;

    int B=budget/cost,sum=0,rem=0;
    
    while(B>0){
        rem+=B%wrapperCost;
        B=B/wrapperCost;
        sum+=B;
    }

    noOfChocolates=(budget/cost)+sum+(rem/wrapperCost);

    cout<<noOfChocolates;

    return 0;
}