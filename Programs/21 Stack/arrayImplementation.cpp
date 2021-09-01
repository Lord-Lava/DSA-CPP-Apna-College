#include <iostream>

using namespace std;

#define n 100

class stack{
    int* arr;   //arr and top are private data members.
    int top;

    public:
    stack(){
        arr = new int[n];   //dynamically allocating n size for the array/stack
        top = -1;
    }
    //push
    void push(int x){
        if(top==n-1){
            cout<<"Stack Overflow"<<endl;
            return;
        }
        top++; 
        arr[top] = x;
    }
    //pop
    void pop(){
        if(top==-1){
            cout<<"Stack underflow"<<endl;
            return;
        }
        top--;
    }
    //top
    int Top(){
        if(top==-1){
            cout<<"Empty Stack"<<endl;
            return -1;
        }
        return arr[top];
    }
    //empty
    bool empty(){
        return top==-1;
    }
};

int main(){
    
    stack st;
    st.push(1);
    st.push(2);
    st.push(3);

    cout<<st.Top()<<endl;
    st.pop();
    cout<<st.Top()<<endl;
    st.pop();
    st.pop();
    st.pop();

    cout<<st.empty()<<endl;

    return 0;
}