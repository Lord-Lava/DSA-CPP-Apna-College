#include <iostream>
#include<stack>
using namespace std;

#define n 1000

//for checking the precedence of operators.
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

string infixToPostfix(string s){
    stack<char>st;

    string res="";

    for (int i = 0; i < s.length(); i++)
    {
        if((s[i]>='a' and s[i]<='z') || (s[i]>='A' and s[i]<='Z')){
            res+=s[i];
        }
        else if(s[i]=='('){
            st.push(s[i]);
        }
        else if(s[i]==')'){
            while (!st.empty() and st.top()!='(')
            {
                res+=st.top();
                st.pop();
            }
            if(!st.empty()){
                st.pop();   //poping the '('
            }
        }
        else{
            if(!st.empty() and prec(s[i])<prec(st.top())){
                res+=st.top();
                st.pop();
            }
            st.push(s[i]);  //pushing the current operator in stack.
        }
    }

    while(!st.empty()){ //poping and printing the remaining stack
        res+=st.top();
        st.pop();
    }
    return res;
}


int main(){
    string s="(a-b/c)*(a/k-l)";
    
    cout<<infixToPostfix(s)<<endl;

    return 0;
}
// "(a-b/c)*(a/k-l)"