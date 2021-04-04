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
   } //constructor
};

//Insertion at head
void insertAtHead(node *&head, int val)
{
   node *n = new node(val);
   n->next = head;
   head = n;
}

//Insertion at tail
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

//searching an element
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

   delete todelete; //this is the delete funtion of DMA
}

//reverse a ll -> iterative method
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

int main()
{

   node* head = NULL;
   insertAtTail(head, 1);
   insertAtTail(head, 2);
   insertAtTail(head, 3);
   display(head);
   // insertAtHead(head,4);
   // display(head);
   // cout<<search(head,3);
   //deletion(head,2);

   // deleteAtHead(head);
   // display(head);

   // node* newhead= reverse(head);
   // node* newhead= reverseRecursive(head);
   // display(newhead);

   return 0;
}