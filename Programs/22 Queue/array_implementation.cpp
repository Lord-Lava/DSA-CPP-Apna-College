//Follows FIFO order
#include <iostream>

using namespace std;

#define n 1000

class queue{
    int* arr;
    int front;
    int back;

    public:
    queue(){
        arr = new int[n];
        front = -1;
        back = -1;
    }
    //push (enqueue)
    void push(int x){
        if(back == n-1){
            cout<<"Queue Overflow"<<endl;
            return;
        }
        back++;
        arr[back]=x;

        if(front = -1){
            front++;    //only while adding the first element.
        }
    }
    //pop (dequeue)
    void pop(){
        if(front == -1 || front>back){
            cout<<"Empty Queue"<<endl;
            return;
        }

        front++;
    }  
    //peek (similar to top in stack)
    int peek(){
        if (front==-1 || front>back)
        {
            cout<<"Empty Queue"<<endl;
            return -1;
        }

        return arr[front];
    }

    bool empty(){
        return (front==-1 || front>back);
    }
};

int main(){
    queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    cout<<q.peek()<<endl;
    q.pop();

    cout<<q.peek()<<endl;
    q.pop();
    
    cout<<q.peek()<<endl;
    q.pop();
    
    cout<<q.peek()<<endl;
    q.pop();
    
    cout<<q.empty()<<endl;

    return 0;
}