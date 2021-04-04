#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string s="jbfahbfahdbghklgf";

    int freq[26];

    for(int i=0;i<26;i++)
        freq[i]=0;

    for(int i=0;i<s.size();i++)
        freq[s[i]-'a']++;

    char ans='a';
    int maxF=0;

    for(int i=0;i<26;i++){
        if(freq[i]>maxF){       //Note here that by doing if(freq[i]>=maxF) we can get the last character lexographically with the maximum occurence.
            maxF=freq[i];       //Otherwise the program will always return the max freq char which comes first lexographically.
            ans=i+'a';
        }
    }

    cout<<maxF<<" "<<ans<<endl;

    return 0;
}