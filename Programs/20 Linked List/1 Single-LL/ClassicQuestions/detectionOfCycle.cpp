//Floyd's hair and tortoise algorithm.
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
            startNode=temp; //signifies start of the cycle.
        }
        temp=temp->next;
        count++;
    }

    temp->next = startNode;
}

bool detectCycle(node* head){
    node* slow=head;
    node* fast = head;

    while(fast!=NULL && fast->next!=NULL){  //condition if the ll doesn't have cycle.
        slow=slow->next;            //slow moves 1 node at a time.
        fast = fast->next->next;    //fast moves 2 nodes at a time.

        if(fast==slow){
            return true;        //if there's a cycle present, the fast meets slow and we return true.
        }
    }

    return false;
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

    // display(head);

    return 0;
}