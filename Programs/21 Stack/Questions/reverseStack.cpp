#include <iostream>

using namespace std;

#define n 1000

class stack{
    int top;
    int* arr;

    public:
    stack(){
        arr = new int[n];
        top = -1;
    }

    void push(int x){
        if(top == n-1){
            cout<<"Stack Overflow"<<endl;
        }
        top++;
        arr[top] = x;
    }

    void pop(){
        if(top==-1){
            cout<<"Stack Underflow"<<endl;
        }
        top--;
    }

    int Top(){
        if(top==-1){
            cout<<"Empty Stack"<<endl;
            return -1;
        }
        return arr[top];
    }

    bool empty(){
        return top==-1;
    }
};


//display
void display(stack st){
    while(!st.empty()){
        cout<<st.Top()<<" ";
        st.pop();
    }cout<<endl;
}

//for inserting element at the bottom of the stack.
void insertAtBottom(stack &st, int ele){       
    if(st.empty()){
        st.push(ele);
        return;
    }

    int topele=st.Top();
    st.pop();
    insertAtBottom(st,ele);
                                                            
    st.push(topele);
}

// if return is encountered, the cursor will go to the 

void reverseStack(stack &st){
    if(st.empty()){
        return;
    }

    int ele=st.Top();
    st.pop();

    reverseStack(st);
    insertAtBottom(st,ele);
}

int main(){
    stack st;

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    display(st);

    reverseStack(st);

    display(st);

    return 0;
}