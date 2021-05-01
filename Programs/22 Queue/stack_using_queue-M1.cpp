#include <iostream>
#include<queue>

using namespace std;

class Stack{
    int N;      //denotes size of the stack
    queue<int>q1;
    queue<int>q2;

    public:
    Stack(){
        N=0;
    }

    void push(int val){
        q2.push(val);   //elements to be pushed in q2
        N++;
        while (!q1.empty())
        {
            q2.push(q1.front());    //pop from q1 and push into q2
            q1.pop();   //pop from q1
        }
        
        //swapping q1 and q2 after pushing into q2
        queue<int>temp=q1;
        q1=q2;
        q2=temp;
    }

    void pop(){ //for pop we simply pop from q1
        q1.pop();
        N--;
    }

    int top(){
        return q1.front();
    }

    int size(){ //returns size of the stack
        return N;
    }
};

int main(){
    Stack st;

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;

    st.pop();
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    st.pop();

    cout<<"Size: "<<st.size()<<endl;

    return 0;
}