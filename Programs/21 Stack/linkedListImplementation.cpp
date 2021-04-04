//implementation using single ll
//top <-node4 <-node3 <-node2 <-node1
#include <iostream>

using namespace std;

class node{
    public:

    int data;
    node* next;
    // node* prev;

    node(int val){
        data = val;
        next = NULL;
        // prev = NULL;
    }
};

class stack{
    node* top;

    public:
    stack(){ 
        top = NULL;
    }//constructor

    void push(int x){
        node* n = new node(x);
        // top->next = n;
        n->next = top; //singly ll implementation
        top = n;
        // top->prev = top;
    }

    void pop(){
        if(top==NULL){
            cout<<"Stack Underflow"<<endl;
            return;
        }

        node* todelete = top; //
        top = top->next;
        delete todelete;
    }

    int Top(){
        if(top == NULL){
            cout<<"Empty Stack"<<endl;
            return -1;
        }

        return top->data;
    }

    bool empty(){
        return top==NULL;
    }
};

int main(){
    stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    cout<<st.Top()<<endl;
    st.pop();
    cout<<st.Top()<<endl;
    st.pop();
    cout<<st.Top()<<endl;
    st.pop();
    cout<<st.Top()<<endl;
    st.pop();

    st.pop();

    cout<<st.empty()<<endl;

    return 0;
}