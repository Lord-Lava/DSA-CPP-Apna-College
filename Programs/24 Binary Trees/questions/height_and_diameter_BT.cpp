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

int calcHeight(node* root){ //time complexity -> O(n) n->number of nodes of a BT
    if(root==NULL){
        return 0;
    }

    int lHeight = calcHeight(root->left);   //height of left nodes
    int rHeight = calcHeight(root->right);  //height of right nodes

    return max(lHeight,rHeight) + 1;        //max of left height and right height + 1 (for each root node)
}

//Diameter of a BT - M1
//time complexity -> O(n*n) as we are calculating for all n nodes and for each node the calcHeight stub function further has a time complexity of O(n).
int calcDiameter(node* root){   
    if(root == NULL){
        return 0;
    }

    int lHeight = calcHeight(root->left);   
    int rHeight = calcHeight(root->right);
    int currDia = lHeight + rHeight + 1;
    
    int lDia = calcDiameter(root->left);
    int rDia = calcDiameter(root->right);

    return max(currDia,max(rDia,lDia));
}

//Diameter M2-> optimized O(n)
int calcDia(node* root, int* height){
    if(root==NULL){
        *height = 0;
        return 0;
    }

    int lh=0, rh=0;
    int lDiameter = calcDia(root->left,&lh);
    int rDiameter = calcDia(root->right,&rh);

    int currDiameter = lh + rh + 1;
    *height = max(lh,rh) + 1;

    return max(currDiameter,max(lDiameter,rDiameter));
}

void inorderPrint(node* root){
    if(root == NULL){
        return;
    }
    inorderPrint(root->left);
    cout<<root->data<<" ";
    inorderPrint(root->right);
}

 /*
           0
          /
         1
       /  \
      2    3
     / \  / \
    4   5 6  7
            /
           8
          /
         9  
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
    root->right->left->left = new node(8);
    root->right->left->left->left = new node(9);

    inorderPrint(r);
    cout<<"\n";

    //Height of a BT
    cout<<calcHeight(r)<<endl;

    //Diameter of a BT
    cout<<calcDiameter(r)<<endl;

    //Diameter of BT - Optimized
    int height = 0;
    cout<<calcDia(root,&height)<<endl;

    return 0;
}