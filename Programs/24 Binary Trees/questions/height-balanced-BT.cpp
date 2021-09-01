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

int height(node* root){ //O(n)
    if(!root) return 0;

    return max(height(root->left),height(root->right)) + 1;
}

bool isBalanced(node* root){    //O(n*n)
    if(!root) return true;

    if(isBalanced(root->left) == false){
        return false;
    }
    if(!isBalanced(root->right)){
        return false;
    }

    int lh = height(root->left);
    int rh = height(root->right);

    if(abs(lh - rh) <=1 ){
        return true;
    }
    else
        return false;
}

//optimized method -> O(n)
bool isbalanced(node* root, int* height){    
    if(!root) return true;

    int lh = 0, rh=0;

    if(isbalanced(root->left, &lh) == false){
        return false;
    }
    if(!isbalanced(root->right, &rh)){
        return false;
    }

    *height = max(lh,rh) + 1;

    if(abs(lh - rh) <=1 ){
        return true;
    }
    else
        return false;
}

void levelOrderPrint(node* root){   
    if(root == NULL){
        return;
    }

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
            /
           8     ->Balanced uptil here
          /
         9       ->Unbalanced
    */

int main(){
    node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);
    root->right->right->right = new node(8);
    // root->right->right->right->right = new node(9);

    levelOrderPrint(root);
    cout<<"\n";

    int height = 0;

    if(isbalanced(root,&height)){
        cout<<"Balanced Tree\n";
    }
    else{
        cout<<"Unbalanced Tree\n";
    }

    return 0;
}