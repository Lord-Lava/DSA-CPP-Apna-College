#include<iostream>

using namespace std;

bool isAlphabet(char a){
    if(a>=65 && a<=90){
        return true;
    }
    else if(a>=97 && a<=122){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    char a;
    cin>>a;

    if(isAlphabet(a)){
        cout<<"Alphabet"<<endl;
    }
    else{
        cout<<"Not Alphabet"<<endl;
    }
    
    return 0;
}