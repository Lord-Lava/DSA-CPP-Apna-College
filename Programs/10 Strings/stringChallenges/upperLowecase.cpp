#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string str="dnfaujknflkajdbfa";

    //convert to upper case 

    for(int i=0;i<str.size();i++){
        str[i]-=32;
    }

    cout<<str<<endl;

    //convert to lower case 

    for(int i=0;i<str.size();i++){
        if(str[i]>='A' && str[i]<='Z')
            str[i]+=32;
    }

    cout<<str<<endl;

    //using STL
    string s="efsbahbfhab";

    transform(s.begin(),s.end(), s.begin(), ::toupper);

    cout<<s<<endl;

    transform(s.begin(),s.end(),s.begin(),::tolower);

    cout<<s<<endl;

    return 0;
}