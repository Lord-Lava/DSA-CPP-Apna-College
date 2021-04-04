#include<iostream>
#include<string>

using namespace std;

int main(){
    //basic
    string str;
    cin>>str;
    cout<<str<<endl;

    //different types of ways of declaring string
    //M-1
    
    string str1(5,'n'); //for storing 'n' 5 times.
    cout<<str1<<endl;
    
    //M2
    
    string str2="ApniKaksha";
    cout<<str2<<endl;
    
    //M3 (to input a sentence)
    
    string str3;
    getline(cin,str3);
    cout<<str3<<endl;
    
    return 0; 

