#include <bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* right;
    Node* left;
};
Node* push(Node *head_ref, int data){
    Node* node =new Node();
    if (head_ref == NULL){
        node->data = data;
        node->left= NULL;
        node->right= NULL;
        head_ref= node;
        return head_ref;
    }
    if(head_ref->data > data){
        head_ref->left = push(head_ref->left,data);
    }
    else {
        head_ref->right = push(head_ref->right,data);
    }
    return head_ref;
}
void postorder(Node* head_ref){
    if(head_ref == NULL){
        return;
    }
    postorder(head_ref->left);
    postorder(head_ref->right);
    cout<<head_ref->data<<" ";
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
 postorder(head);

}
