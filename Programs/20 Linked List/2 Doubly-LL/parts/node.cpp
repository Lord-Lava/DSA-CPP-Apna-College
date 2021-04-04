#include <iostream>

using namespace std;

class node{
    public:

    int data;
    node* next;
    node* prev;

    node(int val){
        data = val;
        next=NULL;
        prev=NULL;
    }//constructor to initialize the data and the two pointers.
};

int main(){
    

    return 0;
}