#include <iostream>
#include <queue>

using namespace std;

struct node{
    int data;
    struct node* left;
    struct node* right;

    node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

//preorder ->  root left right
void preorder(struct node* root){
    if(root == NULL){
        return;
    }

    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

//inorder ->  left root right
void inorder(struct node* root){
    if(root == NULL){
        return;
    }

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

//postorder ->  left right root
void postorder(struct node* root){
    if(root == NULL){
        return;
    }

    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

//level order-> level by level
void levelOrder(node* root){
    if(root == NULL){
        return;
    }

    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        node* n = q.front();
        q.pop();
        if(n!=NULL){
            cout<<n->data<<" ";
            
            if(n->left)              //or if(n->left!=NULL)
                q.push(n->left);
            
            if(n->right)             //or if(n->right!=NULL)
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
    struct node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);

    preorder(root);
    cout<<"\n";

    inorder(root);
    cout<<"\n";

    postorder(root);
    cout<<"\n";

    //level order traversal
    levelOrder(root);

    return 0;
}