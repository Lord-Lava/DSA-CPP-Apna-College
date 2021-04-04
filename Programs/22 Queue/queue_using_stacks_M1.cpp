//M-1-> Using 2 stacks s1 and s2.
//dequeue operation costly -> O(n)
//enqueue -> O (n)
#include <iostream>
#include<stack>

using namespace std;

class queue{
    stack<int> s1;
    stack<int> s2;

    public:
        //enqueue operation done in stack 1
        void push(int x){   
            s1.push(x);
        }

        //dequeue/pop + peek combined
        int pop(){  //dequeue operation done from stack 2 by first pushing the elements in it.
            if(s1.empty() && s2.empty()){
                cout<<"Queue is Empty"<<endl;
                return -1;
            }
            if(s2.empty()){
                while (!s1.empty()) //push all elements to stack 2 while stack 1 is not empty
                {
                    s2.push(s1.top());
                    s1.pop();
                }
            }

            int topval = s2.top();
            s2.pop();
            return topval;
        }
        //the queue is empty when both s1 and s2 are empty. 
        bool empty(){
            return (s1.empty() && s2.empty());
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