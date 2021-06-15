//M-2-> pop operation costly O(n)
#include <iostream>
#include<queue>

using namespace std;

class Stack{
    int N;
    queue<int>q1;
    queue<int>q2;

    public:

    Stack(){
        N=0;
    }

    void pop(){
        if(q1.empty()) return;

        while (q1.size()!=1)
        {
            q2.push(q1.front());
            q1.pop();
        }

        q1.pop(); //pop the remaining 1 element
        N--;

        queue<int>temp = q1;
        q1 = q2;
        q2 = temp;
    }
    
    void push(int val){
        q1.push(val);
        N++;
    }

    int top(){
        if (q1.empty())
            return -1;
        
        while (q1.size()!=1)
        {
            q2.push(q1.front());
            q1.pop();
        }
        
        int ans = q1.front();   //before returning the ans, we need to push ans back to q2 
        q2.push(ans);           //and do further operations to ensure that we get q1 back 
                                //as it is as we don't have to pop but we just need the top element of our formed stack. 
        //swap q1 and q2
        queue<int>temp = q1;
        q1=q2;
        q2=temp;

        return ans;
    }

    int size(){
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