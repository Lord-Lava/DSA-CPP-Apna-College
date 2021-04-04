#include<iostream>

using namespace std;

void replacePi(string str){
    if(str.length()==0){    //base case
        return;
    }

    if(str[0]=='p'&& str[1]=='i'){
        cout<<"3.14";
        replacePi(str.substr(2));
    }
    else{
        cout<<str[0];
        replacePi(str.substr(1));
    }
}

int main(){
    string str;
    cin>>str;

    replacePi(str);

 return 0;
}