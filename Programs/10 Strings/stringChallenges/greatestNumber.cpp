#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string s="47594720510589";

    sort(s.begin(),s.end(), greater<int>());

    cout<<s<<endl;
    
    return 0;
}