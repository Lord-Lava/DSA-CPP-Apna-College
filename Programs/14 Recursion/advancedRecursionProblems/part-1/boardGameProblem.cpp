#include<iostream>

using namespace std;

int countPath(int s, int e){
    if(s==e){
        return 1;
    }
    if(s>e){
        return 0;
    }

    int count=0;
    for(int i=1;i<=6;i++)
        count+=countPath(s+i,e);

    return count;    
}

int main(){

    int s,e;
    cin>>s>>e;

    cout<<countPath(s,e);

    return 0;
}