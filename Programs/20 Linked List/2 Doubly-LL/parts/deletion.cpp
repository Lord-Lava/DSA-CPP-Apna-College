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
    }//constructor
};

//Insert at head
void insertAtHead(node* &head, int val){
    node* n = new node(val);

    n->next = head;

    if(head!=NULL){
        head->prev = n;
    }
    
    head = n;
}

//Insert at Tail
void insertAtTail(node* &head, int val){
    
    if(head==NULL){     //if head is NULL we can't access its previous
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

//display
void display(node* head){
    node* temp = head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }

    cout<<endl;
}

//deletion at head
void deleteAtHead(node* &head){
    node* todelete = head;
    head = head->next;
    head->prev = NULL;

    delete todelete; 
}

//Deletion at a pos
void deletion(node* &head, int pos){

    if(head==NULL){
        return;
    }

    if(pos==1){
        deleteAtHead(head);
        return;
    }

    node* temp = head;

    int count = 1;

    while(temp!=NULL && count!=pos){ 
        temp=temp->next;
        count++;
    }

    temp->prev->next = temp->next;

    if(temp->next!=NULL){   //as we can't access temp->next->prev of last node
        temp->next->prev = temp->prev;
    }

    delete temp;
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

    deletion(head,5);
    // deletion(head,1);

    display(head);

    return 0;
}