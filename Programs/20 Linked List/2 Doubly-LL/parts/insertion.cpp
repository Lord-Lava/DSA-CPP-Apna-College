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
    }
};

//Insert at head
void insertAtHead(node* &head, int val){
    node* n = new node(val);

    n->next = head;

    if(head!=NULL){      //if head is NULL we can't access its previous
        head->prev = n; 
    }
    
    head = n;
}

//Insert at Tail
void insertAtTail(node* &head, int val){
    
    if(head==NULL){
        insertAtHead(head,val);
        return;
    }
    
    node* n = new node(val);
    node* temp = head;

    while(temp->next!=NULL){
        temp=temp->next;
    }

    temp->next = n;
    n->prev = temp;
}

void display(node* head){
    node* temp = head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }

    cout<<endl;
}

int main(){
    node* head = NULL;
    insertAtHead(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);

    display(head);

    insertAtHead(head,5);

    display(head);

    return 0;
}