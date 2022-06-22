#include <bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* left;
    Node* right;
};

Node* push(Node *head,int data){
    if(head==NULL){
        Node *node= new Node();
        node->data=data;
        node->left=NULL;
        node->right=NULL;
        head = node;
       return head;
    }
    if(head->data> data){
       head->left= push(head->left,data);

    }
    else{
       head->right= push(head->right,data);
    }
    return head;
}

void print(Node *head){
    if(head == NULL){
        return;
    }
    print(head->left);
    cout<<head->data<<" ";
    print(head->right);
}
void levelorder(Node *head){
    if(head==NULL){
        return;
    }
    queue <Node*> q;
    q.push(head);
    while(!q.empty()){
        Node *node = q.front();
        cout<<node->data<<" ";
        if(node->left !=NULL){
            q.push(node->left);
        }
        if(node->right !=NULL){
            q.push(node->right);
        }
        q.pop();
    }
  
}


int main(){
 Node* head = NULL;
 queue <int> q;
 int n ;
 cin>>n;
 int data;
 int c=0;
 for(int i = 0; i<n;i++){
        cin>>data;
    head= push(head,data);
 }
 print(head);
cout<<endl;
levelorder(head);
}