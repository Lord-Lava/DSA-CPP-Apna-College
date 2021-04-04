#include<iostream>

using namespace std;

void permutation(string s, string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }

    for(int i=0;i<s.length();i++){
        char ch=s[i];
        string ros = s.substr(0,i)+s.substr(i+1); //s.substr(start index, end index)
        permutation(ros,ans+ch);
    }
}

int main(){
    string s;
    cin>>s;

    permutation(s,"");

    return 0;
}