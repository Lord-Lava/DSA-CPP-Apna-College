#include <iostream>

using namespace std;

void swap(int &a,int &b){
    a=a+b;
    b=a-b;
    a=a-b;
    return;
}

int main(){
    int a,b;
    cin>>a>>b;

    cout<<"Before: "<<a<<" "<<b<<endl;

    swap(a,b);

    cout<<"After: "<<a<<" "<<b<<endl;

    return 0;
}