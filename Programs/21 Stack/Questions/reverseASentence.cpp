#include <iostream>
#include<stack> //Stack STL
using namespace std;

void reverseSentence(string s){
    stack<string>st;

    for (int i = 0; i < s.length(); i++)
    {
        string word = "";

        while(s[i]!=' ' && i<s.length()){   //each word demarcated by a ' '.
            word+=s[i];
            i++;
        }

        st.push(word);  //pushing each word into the stack.
    }

    while (!st.empty())
    {
        cout<<st.top()<<" ";    //displaying the top element each time.
        st.pop();
    }cout<<endl;
    
}

int main(){
    
    string s = "Hey, how are you doing?";

    reverseSentence(s);

    return 0;
}