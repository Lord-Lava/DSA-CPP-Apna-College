#include<iostream>

using namespace std;

void reverseS(string s){
    if(s.length()==0){
        return;
    }

    string restString = s.substr(1);
    reverseS(restString);
    cout<<s[0];
}

int main(){
    string s;
    cin>>s;

    reverseS(s);

    return 0;
}