#include<bits/stdc++.h>
#include<iostream>
using namespace std;
struct node{

int data;
struct node*left;
struct node*right;
};
struct node *newNode(int data){
    struct node *node=(struct node*)malloc(sizeof(struct node));
    node ->data=data;
    node->left=NULL;
    node->right=NULL;
    return (node);
}
void preorder(struct node *temp){

if(temp!=NULL){
    cout<<" "<<temp->data;
    preorder(temp->left);
    preorder(temp->right);

}
}
void inorder(struct node *temp){

if(temp!=NULL){

    inorder(temp->left);
    cout<<" "<<temp->data;
    inorder(temp->right);

}


}
void postorder(struct node *temp){

if(temp!=NULL){

    postorder(temp->left);

    postorder(temp->right);
     cout<<" "<<temp->data;
}
}
int main(){

struct node *root=newNode(1);
root->left=newNode(2);
root->right=newNode(3);
root->left->left=newNode(4);

cout<<"pre order traversal : ";
preorder(root);
cout<<"\ninorder traversal : ";
inorder(root);
cout<<"\npost order traversal : ";
postorder(root);




return 0;
}

