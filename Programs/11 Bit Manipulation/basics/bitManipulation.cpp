#include<iostream>
using namespace std;

//to get the bit at the given position
int getBit(int n, int pos){
    return ((n&1<<pos)!=0);
}

//to set the bit at the given position
int setBit(int n, int pos){
    return(n|(1<<pos));
}

//to clear the bit at the given position (clear -> 0, unclear -> 1)
int clearBit(int n, int pos){
    int mask=~(1<<pos);
    return (n&mask);
}

//to update the bit at the given position with the given value
int updateBit(int n, int pos, int value){
    int mask=~(1<<pos);
    n=n&mask;
    return (n|(value<<pos));
}

int main(){
    int n , pos;
    cin>>n>>pos;

    cout<<getBit(n,pos)<<endl;
    cout<<setBit(n,pos)<<endl;
    cout<<clearBit(n,pos)<<endl;
    
    int value;
    cin>>value;

    cout<<updateBit(n,pos,value);

    return 0;
}