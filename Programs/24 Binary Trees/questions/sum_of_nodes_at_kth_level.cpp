#include <iostream>
#include <queue>

using namespace std;

struct node{
    int data;
    node* left;
    node* right;

    node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

int sumAtK(node* root, int k){ 
    if(root==NULL){
        return -1;  //assuming no negative value in the tree.
    }

    queue<node*>q;
    q.push(root);
    q.push(NULL);
    int level = 0;
    int sum=0;

    while(!q.empty()){
        node* n = q.front();
        q.pop();

        if(n!=NULL){
            if(level == k){
                sum+=n->data;
            }
            if(n->left)
                q.push(n->left);
            if(n->right)
                q.push(n->right);
        }
        else if(!q.empty()){
            q.push(NULL);
            level++;
        }
    }
    return sum;
}

void PrintlevelOrder(node* root){
    if(root==NULL){
        return;
    }

    queue<node*>q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node* n = q.front();
        q.pop();
        if(n != NULL){
            cout<<n->data<<" ";
            if(n->left)
                q.push(n->left);
            if(n->right)
                q.push(n->right);    
        }
        else if(!q.empty()){
            q.push(NULL);
        }
    }
}

 /*
         1
       /  \
      2    3
     / \  / \
    4   5 6  7
    */

int main(){
    node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);

    PrintlevelOrder(root);
    cout<<"\n";

    //sum at kth level
    cout<<sumAtK(root,2)<<"\n";

    return 0;
}