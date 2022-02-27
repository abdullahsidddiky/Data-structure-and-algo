#include <bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* right;
    Node* left;
};
Node* insertnode(Node* node,int data){
    if(node == NULL){
        Node* n = new Node();
        n->data = data;
        n->right = NULL;
        n->left = NULL;
        node = n;
        return node;

    }
    if(node->data>data){
        node->left = insertnode(node->left,data);
    }
    else{
        node->right = insertnode(node->right,data);
    }

     return node;
}

void print(Node* head_ref){

    if(head_ref==NULL){
        return;
    }
    cout<<head_ref->data<<" ";
    print(head_ref->left);
    print(head_ref->right);

}
int main(){
    Node* head = NULL;
 int n ;
 cin>>n;
 int data;
 for(int i = 0; i<n;i++){
        cin>>data;
    head= insertnode(head,data);
 }
 print(head);


}

