#include <iostream>

using namespace std;

class node{
    public:

    int data;
    node* next;

    node(int val){
        data=val;
        next=NULL;
    }
}; //node (same as singular LL)

void insertAtHead(node* &head, int val){
    node* n = new node(val);

    if (head==NULL)
    {
        n->next = n;
        head = n;
        return;
    }

    node* temp = head;

    while(temp->next!=head){    
        temp=temp->next;
    }

    temp->next = n;
    n->next = head;
    head = n;
}

//insertion at tail
void insertAtTail(node* &head, int val){
    
    if(head==NULL){
        insertAtHead(head,val);
        return;
    }
    
    node* n = new node(val);

    node* temp = head;

    while(temp->next!=head){    //at the end node of the circular ll node->next = head.
        temp=temp->next;
    }

    temp->next = n;
    n->next = head;
}

//display 
void display(node* head){
    node* temp=head;

    do
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    } while (temp!=head);

    cout<<endl;
}

//linear search
bool search(node* head, int key){
    node* temp=head;

    do
    {
        if(temp->data == key){
            return true;
        }
        temp=temp->next;
    } while (temp!=head);

    return false;
}

//deletion at head
void deleteAtHead(node* &head){
    node* temp = head;

    while(temp->next!=head){
        temp=temp->next;
    }

    node* todelete = head;
    temp->next = head->next;
    head = head->next;

    delete todelete;
}

//deletion at a particular position.
void deletion(node* &head, int pos){

    if(pos==1){
        deleteAtHead(head);
        return;
    }

    node* temp= head;
    int count =1;

    while (count!=pos-1)
    {
        temp=temp->next;
        count++;
    }
    
    node* todelete = temp->next;
    temp->next = temp->next->next;
    delete todelete;
}

int main(){

    node* head = NULL;

    insertAtHead(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);
    insertAtTail(head, 6);

    display(head);

    insertAtHead(head,7);
    display(head);

    cout<<search(head,11)<<endl;

    deletion(head, 1);
    display(head);

    return 0;
}