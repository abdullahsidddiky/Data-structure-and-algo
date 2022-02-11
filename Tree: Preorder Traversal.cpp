#include <bits/stdc++.h>
using namespace std;
#define COUNT 10
struct Node{
    int data;
    Node* left;
    Node* right;
};

Node* push(Node *head_ref, int data){


    if(head_ref == NULL){
        Node* node = new Node();
        node->data = data;
        node->left= NULL;
        node->right =NULL;
        head_ref = node;
        return head_ref;
    }

     if(head_ref->data>data){
      head_ref->left=push(head_ref->left,data);
    }
    else{
      head_ref->right = push(head_ref->right,data);
    }
    return head_ref;
}
void preorder(Node* head_ref)
{
    if(head_ref == NULL){
        return;
    }
    cout<<head_ref->data<<" ";
    preorder(head_ref->left);
    preorder(head_ref->right);



}
int main(){
 Node* head = NULL;
 int n ;
 cin>>n;
 int data;
 for(int i = 0; i<n;i++){
        cin>>data;
    head= push(head,data);
 }
 preorder(head);

}


