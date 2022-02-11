#include <bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    struct Node* next;
};
void push(Node** head_ref,int data){
    Node* node =new Node();
    node->data=data;
    node->next=NULL;
    if(*head_ref == NULL){
        *head_ref = node;
        return;
    }
    Node * last = *head_ref;
    while(last->next!=NULL){
        last=last->next;
    }

    last->next=node;

}
void print(Node* n){
  while(n!=NULL){
    cout<<n->data<<" ";
    n = n->next;
  }
}
void deletenode(Node** head_ref, int position){
    Node* node = *head_ref;
    if(position == 0){
        *head_ref = node->next;
        return;
    }
    for(int i = 1; i < position;i++){
        node=node->next;
    }

    node->next = node->next->next;

}
int main(){
    Node* head = NULL;
    int n;
    int data;
    cin>>n;
    for(int i = 0; i<n;i++){
        cin>>data;
        push(&head,data);
    }
    int position;
    cin>>position;
    deletenode(&head,position);
    print(head);
}
