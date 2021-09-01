//Q) Replace the value of each node with the sum of all subtree nodes and itself.

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

void sumreplace(node* root){    //O(n)
    if(root == NULL){
        return;
    }

    //note-> for leaf node which has no left or right child, the function will simply return keeping its value intact.
    
    sumreplace(root->left);     
    sumreplace(root->right);

    if(root->left != NULL){
        root->data += root->left->data;
    }

    if(root->right != NULL){
        root->data += root->right->data;
    }
}

//easier method
int sumReplacement(node* root){
    if(root == NULL)   return 0;

    root->data = sumReplacement(root->left) + sumReplacement(root->right) + (root->data);
    
    return root->data;
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
           0        45
          /
         1          45
       /  \
      2    3        11 33
     / \  / \
    4   5 6  7      4 5 6 24
            /
           8        17
          /
         9          9
    */

int main(){
    node* r = new node(0);
    node* root = new node(1);
    r->left = root;
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);
    root->right->right->right = new node(8);
    root->right->right->right->right = new node(9);

    levelOrderPrint(r);
    cout<<"\n";

    //Sum Replacement
    
    // sumreplace(r); or

    cout<<sumReplacement(r)<<"\n";

    levelOrderPrint(r);
    cout<<"\n";

    return 0;
}