#include <bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* left;
    Node* right;
};
Node* push(Node* head, int data){
    if(head==NULL){
        Node* node= new Node();
        node->data= data;
        node->left=NULL;
        node->right= NULL;
        head= node;
        return head;
    }
    if(head->data > data){
        head->left = push (head->left,data);
    }
    else{
        head->right= push(head->right,data);
    }
    return head;
}
void inorder(Node* head){
    if(head==NULL){
        return;
    }
    inorder(head->left);
    cout<<head->data<<" ";
    inorder(head->right);
}

int height(Node* node){
    if(node==NULL){
        return -1;
    }
    int lh=height(node->left);
    int rh=height(node->right);
    if(lh>rh){
        return lh+1;
    }
    else{ 
        return rh+1;
    }
    
}
int main(){
    Node* head=NULL;
    int n;
    cin>>n;
    int data;
    for(int i=0;i<n;i++){
        cin>>data;
        head= push(head,data);
        
    }
    inorder(head);
    cout<<height(head)<<endl;
    
}