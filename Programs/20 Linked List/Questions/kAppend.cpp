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

void insertAtHead(node *&head, int val)
{
   node *n = new node(val);
   n->next = head;
   head = n;
}

void insertAtTail(node *&head, int val)
{
   node *n = new node(val);

   if (head == NULL)
   {
      head = n;
      return;
      //or insertAtHead(head, val);
      // return;
   }

   node *temp = head;

   while (temp->next != NULL)
   {
      temp = temp->next;
   }
   temp->next = n;
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

bool search(node *head, int key)
{
   node *temp = head;
   while (temp != NULL)
   {
      if (temp->data == key)
      {
         return true;
      }
      temp = temp->next;
   }
   return false;
}

void deleteAtHead(node *&head)
{
   node *todelete = head;
   head = head->next;

   delete todelete;
}

void deletion(node *head, int val)
{

   if (head == NULL)
   {
      return;
   }
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

node *reverse(node *&head)
{
   node *prevptr = NULL;
   node *currptr = head;
   node *nextptr;

   while (currptr != NULL)
   {
      nextptr = currptr->next;
      currptr->next = prevptr;

      prevptr = currptr;
      currptr = nextptr;
   }

   return prevptr;
}

node *reverseRecursive(node *head)
{

   if (head == NULL || head->next == NULL)
   {
      return head;
   }

   node *newhead = reverseRecursive(head->next);
   head->next->next = head;
   head->next = NULL;

   return newhead;
}

//function to find length of the linked list
int length(node* head){
   int l=0;

   node* temp=head;

   while(temp!=NULL){
      l++;
      temp=temp->next;
   }

   return l;
}

node* kAppend(node* &head, int k){
   node* newHead;
   node* newTail;
   node* tail = head;

   int l=length(head);
   k=k%l;               //for handling the corner case when l>k. 
   int count = 1;

   while (tail->next!=NULL)
   {  
      if(count==l-k){
         newTail = tail;
      }
      if(count==l-k+1){
         newHead = tail;
      }
      tail=tail->next;
      count++;
   }

   tail->next = head;
   newTail->next = NULL;

   return newHead;
   
}

int main()
{
    node* head = NULL;

    int arr[]={1,2,3,4,5,6};

    for (int i = 0; i < 6; i++)
    {
        insertAtTail(head,arr[i]);
    }

      display(head);

      node* newHead = kAppend(head,3);

    display(newHead);
    

   return 0;
}