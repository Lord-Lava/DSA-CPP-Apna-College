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

int length(node* head){
    node* temp=head;

    int l=0;

    while(temp!=NULL){
        l++;
        temp=temp->next;
    }
    return l;
}

//function to intersect 2 ll
void intersect(node* &head1, node* &head2, int pos){
    node* temp1=head1;
    pos--;
    while (pos--)
    {
        temp1=temp1->next;
    }

    cerr<<temp1->data<<endl;

    node* temp2=head2;
    while (temp2->next!=NULL)
    {
        temp2=temp2->next;
    }

    temp2->next=temp1;
    
    
}

//function to find the intersection point data.
int intersection(node* &head1, node* &head2){
    int l1=length(head1);
    int l2=length(head2);

    int d=0;
    node* ptr1;
    node* ptr2;

    if(l1>l2){
        d=l1-l2;
        ptr1=head1;
        ptr2=head2;
    }
    else{
        d=l2-l1;
        ptr1=head1;
        ptr2=head2;
    }

    while(d){
        ptr1=ptr1->next;
        if(ptr1==NULL){
            return -1;
        }
        d--;
    }

    while(ptr1!=NULL && ptr2!=NULL){
        if(ptr1==ptr2){
            return ptr1->data;  ///return ptr2->data;
        }
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }

    return -1;
}

int main()
{

   node* head1 = NULL;
   node* head2 = NULL;

   int arr1[]={1,2,3,4,5,6};
   int arr2[]={9,10};

   for (int i = 0; i < 6; i++)
   {
       insertAtTail(head1,arr1[i]);
   }

   for (int i = 0; i < 2; i++)
   {
       insertAtTail(head2,arr2[i]);
   }

   intersect(head1,head2,3);

   display(head1);
   display(head2);

   cout<<intersection(head1,head2);



   return 0;
}