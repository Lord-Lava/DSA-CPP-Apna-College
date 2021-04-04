#include <iostream>

using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

//insertion at head

void insertAtHead(node *&head, int val)
{
    node *n = new node(val);
    n->next = head;
    head = n;
}

//insertion at tail
void insertAtTail(node *&head, int val)
{
    node *n = new node(val);

    if (head == NULL)
    {
        head = n;
        return;
        //or insertAtHead(head,val); return;
    }

    node *temp = head;

    while (temp->next != NULL)
    { //for travelling the ll
        temp = temp->next;
    }

    temp->next = n;
}

//deletion at head
void deleteAtHead(node *&head)
{
    node *todelete = head;
    head = head->next;
    delete todelete;
}

//deletion at any other point except for head
void deletion(node *head, int val)
{
    if (head == NULL)
        return;

    if (head->next == NULL)
    {
        deleteAtHead(head);
        return;
    }

    node *temp = head;

    while (temp->next->data != val)
    {
        temp = temp->next;
    }

    node *todelete = temp->next;
    temp->next = temp->next->next;
    delete todelete;
}

//deletion at a particular position (not by value).
void deleteAtpos(node* &head, int pos){
    if(pos==1){
        deleteAtHead(head);
        return;
    }

    node* temp=head;
    int count =1;

    while(temp!=NULL && count!=pos-1){
        temp=temp->next;
        count++;
    }

    node* todelete = temp->next;
    temp->next = temp->next->next;
    delete todelete;
}

void display(node *head)
{
    node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }

    cout << "NULL" << endl;
}

int main()
{
    node *head = NULL;

    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtHead(head, 4);
    //deleteAtHead(head);
    // deletion(head, 3);
    deleteAtpos(head,4);
    display(head);

    return 0;
}