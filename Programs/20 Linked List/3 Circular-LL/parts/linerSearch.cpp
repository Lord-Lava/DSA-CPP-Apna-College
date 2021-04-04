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

//insertion at head
void insertAtHead(node* &head, int val){
    node* n= new node(val);

    if(head == NULL){
        n->next = n;
        head = n;
        return;
    }

    node* temp = head;

    while(temp->next!=head){
        temp = temp->next;
    }

    temp->next = n;
    n->next = head;
    head = n;
}

//inertion at tail 
void insertAtTail(node* &head, int val){
    node* n = new node(val);

    if(head==NULL){
        insertAtHead(head,val);
        return;
    }

    node* temp = head;

    while (temp->next!=head)
    {
        temp=temp->next;
    }

    temp->next = n;
    n->next = head;
    
}

//display
void display(node* head){
    node* temp = head;

    do
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    } while (temp!=head);

    cout<<endl;
}

//linear search
bool search(node* head, int key){
    node* temp = head;

    do
    {
        if(temp->data==key){
            return true;
        }
        temp=temp->next;
    } while (temp!=head);
    
    return false;
}

int main(){
    node* head = NULL;

    insertAtHead(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);

    display(head);

    insertAtHead(head,6);

    cout<<search(head, 5)<<endl;

    display(head);

    return 0;
}