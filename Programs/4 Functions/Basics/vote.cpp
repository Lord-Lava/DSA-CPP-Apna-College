#include <iostream>

using namespace std;

void vote(int age){
    if(age>=18){
        cout<<"Eligible"<<endl;
    }
    else{
        cout<<"Not Eligible"<<endl;
    }
    return;
}

int main(){
    int age;
    cout<<"Enter age: ";
    cin>>age;

    vote(age);

    return 0;
}