#include <iostream>

using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int val){
        data = val;
        next = NULL;
    }
};

class queue{
    node* front;
    node* back;

    public:
    queue(){
        front=NULL;
        back=NULL;
    }
    //Enqueue (push)
    void push(int x){
        node* n = new node(x);

        if(front == NULL){
            back=n;
            front=n;
            return;
        }

        back->next = n; //linking the back to the new node.
        back = n;
    }
    //Dequeue (pop)
    void pop(){
        if(front==NULL){
            cout<<"Queue Underflow"<<endl;
            return;
        }

        node* todelete = front;
        front = front->next;

        delete todelete;
    }
    //Similar to top in stack.
    int peek(){
        if(front==NULL){
            cout<<"Empty Queue"<<endl;
            return -1;
        }

        return front->data;
    }
    // returns whether queue is empty.
    bool empty(){
        return front==NULL;
    }
};

int
main()
{
    queue q;

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    cout << q.peek() << endl;
    q.pop();

    cout << q.peek() << endl;
    q.pop();

    cout << q.peek() << endl;
    q.pop();

    cout << q.peek() << endl;
    q.pop();

    cout << q.empty() << endl;

    return 0;
}