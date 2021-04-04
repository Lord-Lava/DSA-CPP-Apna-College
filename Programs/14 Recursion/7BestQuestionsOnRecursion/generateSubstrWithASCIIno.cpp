#include<iostream>

using namespace std;

void subseqASCII(string s,string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }

    char ch=s[0];
    int ASCII=ch;       //or ASCII=s[0];
    string ros=s.substr(1);
    
    subseqASCII(ros,ans);
    subseqASCII(ros,ans+ch);
    subseqASCII(ros,ans+to_string(ASCII));

}

int main(){
    string s;
    cin>>s;

    subseqASCII(s,"");

    return 0;
}