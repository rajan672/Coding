#include<bits/stdc++.h>
using namespace std;
struct Node{
    struct Node* left;
    int data;
    struct Node* right;
    Node(int val){
        data=val;
        left=NULL;
        right= NULL;
    }
};

int minvalue(Node* root){
    Node* tree = root;

    while(root->left != NULL){
        root=root->left;
    }
    int curr=root->data;
    return curr;
}

void preorder(Node *root){
    if(root==NULL){
        return;
    }
    cout<<root->data;
    preorder(root->left);
    preorder(root->right);
}
void inorder(Node *root){
    if(root==NULL){
        return;
    }
    
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
    
}

int main(){
    Node *root= new Node(4);
    root->left = new Node(2);
    //root->left->left = new Node(1);
    root->left->right = new Node(3);

    root->right = new Node(6);
    root->right->left = new Node(5);

    /* preorder(root);
    cout<<endl;
    inorder(root); */

    cout<<minvalue(root);

}