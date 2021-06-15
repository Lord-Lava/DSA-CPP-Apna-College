#include <iostream>

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

int search(int inorder[], int start, int end, int val){
    for(int i=start;i<=end;i++){
        if(inorder[i] == val){
            return i;
        }
    }
    return -1;
}

node* buildTree(int postorder[], int inorder[], int start, int end){
    static int idx = 4;
    if(start>end){
        return NULL;
    }

    int val = postorder[idx];
    idx--;
    node* curr = new node(val);

    if(start == end){
        return curr;
    }

    int pos = search(inorder,start,end,val);
    curr->right = buildTree(postorder,inorder,pos+1,end);
    curr->left = buildTree(postorder,inorder,start,pos-1);

    return curr;
}

void inorderPrint(node* root){
    if(root == NULL){
        return;
    }
    inorderPrint(root->left);
    cout<<root->data<<" ";
    inorderPrint(root->right);
}

int main(){
    int postorder[] = {4,2,5,3,1};
    int inorder[] = {4,2,1,5,3};

    //build tree
    node* root = buildTree(postorder,inorder,0,4);
    inorderPrint(root);
    cout<<"\n";

    return 0;
}