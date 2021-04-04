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

void insertAtHead(node* &head , int val){
    node* n = new node(val);
    n->next = head;
    head = n;
}

void insertAtTail(node* &head, int val){
    node* n = new node(val);

    if(head == NULL){
        insertAtHead(head, val);
        return;
    }

    node* temp = head;

    while(temp->next!=NULL){
        temp=temp->next;
    }

    temp->next = n;

}

void deleteAtHead(node* &head){
    node* todelete = head;
    head = head -> next;
    delete todelete;
}

void deletion(node* &head, int val){
    if(head==NULL){
        return;
    }

    if(head->next == NULL){
        deleteAtHead(head);
        return;
    }
    
    node* temp = head;

    while(temp->next->data!=val){
        temp = temp->next;
    }

    node* todelete = temp->next;
    temp->next = temp->next->next;
    delete todelete;
}

void display(node* head){
    node* temp = head;

    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }

    cout<<"NULL"<<endl;
}

bool search(node* head , int key){
    node* temp = head;

    while(temp!=NULL){
        if(temp->data==key){
            return true;
        }
        temp = temp->next;
    }

    return false;
}

node* reverse(node* head){
    node* prev =NULL;
    node* curr = head;
    node* nextptr;

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
    head->next->next = head;
    head->next = NULL;

    return newhead;
}

void makeCycle(node* &head, int pos){
    node* temp=head;
    node* startNode=head;

    int count =1;

    while(temp->next!=NULL){
        if(count == pos){
            startNode=temp;
        }
        temp=temp->next;
        count++;
    }

    temp->next = startNode;
}

bool detectCycle(node* head){
    node* slow=head;
    node* fast = head;

    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast = fast->next->next;

        if(fast==slow){
            return true;
        }
    }

    return false;
}

void removeCycle(node* &head){
    node* fast=head;
    node* slow = head;

    do
    {
        fast=fast->next->next;
        slow=slow->next;
    } while (fast!=slow);
    
    fast = head;

    while (slow->next!=fast->next)
    {
        fast=fast->next;
        slow=slow->next;
    }

    slow->next=NULL;
}

int main(){
    
    node* head = NULL;

    insertAtHead(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
    insertAtTail(head,6);
    insertAtTail(head,7);
    insertAtTail(head,8);
    insertAtTail(head,9);
    makeCycle(head,3);

    cout<<detectCycle(head)<<endl;

    removeCycle(head);

    cout<<detectCycle(head)<<endl;

    display(head);

    return 0;
}