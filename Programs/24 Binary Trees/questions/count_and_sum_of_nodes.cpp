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

int countNodes(node* root){
    if(root == NULL){
        return 0;
    }
    //count of all nodes in left subtree + count of all nodes in the right subtree + 1(for the root nodes of each subtrees)
    return countNodes(root->left) + countNodes(root->right) + 1;     
}

int sumOfNodes(node* root){
    if(root == NULL){
        return 0;
    }

    return sumOfNodes(root->left) + sumOfNodes(root->right) + root->data;
}

void levelOrder(node* root){
    if(root == NULL) return;

    queue<node*>q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node* n = q.front();
        q.pop();

        if(n!=NULL){
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
    struct node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);

    levelOrder(root);
    cout<<"\n";

    cout<<countNodes(root)<<"\n";

    cout<<sumOfNodes(root)<<"\n";

    return 0;
}