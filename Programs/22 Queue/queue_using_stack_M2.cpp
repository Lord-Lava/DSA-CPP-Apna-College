//M-2-> Using call stack of recursion
#include <iostream>
#include<stack>
using namespace std;

class queue{
    stack<int>s;

    public:
        //push operation same as M-1.
        void push(int x){
            s.push(x);
        }

        int pop(){
            if(s.empty()){
                cout<<"Empty Queue"<<endl;
                return -1;
            }

            int x = s.top();
            s.pop();

            //base case for the recursive call. 
            if(s.empty()){         //if only 1 element in stack, 
                return x;         //it becomes empty after previous pop operation and we return the top element x.
            }

            int item = pop();   //poping recursively
            s.push(x);          //pushing back the top elements in the stack.
            return item;
        }

        bool empty(){
            return s.empty();
        }
};

int main(){
    queue q;

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    cout<<q.pop()<<endl;
    q.push(5);

    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;

    cout<<q.empty()<<endl;

    return 0;
}