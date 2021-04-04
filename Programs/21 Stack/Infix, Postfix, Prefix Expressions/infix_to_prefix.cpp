#include <iostream>
#include <algorithm>
#include<stack>
using namespace std;

int prec(char c){
    if(c=='^'){
        return 3;
    }
    else if(c=='*' || c=='/'){
        return 2;
    }
    else if(c=='+' || c=='-'){
        return 1;
    }
    else{
        return -1; //for '('
    }
}

int infixToPrefix(string s){
    reverse(s.begin(),s.end());

    stack<char>st;
    string res;

    for (int i = 0; i < s.length(); i++)
    {
        if(s[i]>='a' && s[i]<='z' || s[i]>='A' && s[i]<='Z'){
            res+=s[i];
        }
        else if(s[i]=='('){
            st.push(s[i]);
        }
        else if(s[i]=')'){
            while(!st.empty() && s[i]!='('){
                res+=s[i];
                st.pop();
            }
            while (!st.empty())
            {
                st.pop();
            }
        }
        else{
            if(!st.empty() && prec(s[i])<prec(st.top())){
                
            }
        }
    }
    
    
}

int main(){
    string s = "";

    cout<<infixToPrefix(s)<<endl;

    return 0;
}