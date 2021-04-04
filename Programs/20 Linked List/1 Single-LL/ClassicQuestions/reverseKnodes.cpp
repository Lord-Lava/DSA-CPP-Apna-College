//time complexity -> O(n)

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
};

void insertAthead(node* &head,int val){
    node* n = new node(val);
    n->next = head;
    head = n;
}

void insertAtTail(node* &head, int val){
    node* n = new node(val);

    if(head==NULL){
        head=n;
        return;
    }

    node* temp = head;

    while(temp->next!=NULL){
        temp=temp->next;
    }

    temp->next=n;

}

void display(node* head){
    node* temp = head;

    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }

    cout<<"NULL"<<endl;
}

node* reverse(node* &head){
    node* prev=NULL; node* curr=head; node* nextptr;

    while(curr!=NULL){
        nextptr = curr->next;
        curr->next = prev;

        prev = curr;
        curr = nextptr;
    }

    node* newhead = prev;

    return newhead;
}

node* reverseRecursive(node* &head){

    if(head==NULL || head->next==NULL){
        return head;
    }

    node* newhead = reverseRecursive(head->next);

    display(newhead);

    node* prev= NULL;
    head->next->next = head;
    head->next = NULL;

    return newhead;
}

node* reverseK(node* &head, int k){
    int count =0;

    node* prev = NULL;
    node* curr = head;
    node* nextptr;

    while(curr!=NULL && count<k){
        nextptr = curr->next;
        curr->next = prev;

        prev = curr;
        curr =  nextptr;

        count++;
    }//reverse first k nodes iteratively. 

    if(nextptr!=NULL){
        head->next = reverseK(nextptr, k);  //nextptr points to the next node after first k nodes so it is passed in recursive call.
                                            //after reversing a group of k nodes, the head is re pointed to the head of next k groups (head->next=reverseK(nextptr,k)).
    }//the remaining k node groups are reversed using recursion.

    return prev;    //prev points at head of the new reversed ll.
}

int main(){
    node* head = NULL;

    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
    insertAtTail(head,6);
    display(head);

    int k=2;

    node* newhead = reverseK(head, k);

    display(newhead);

    return 0;
}