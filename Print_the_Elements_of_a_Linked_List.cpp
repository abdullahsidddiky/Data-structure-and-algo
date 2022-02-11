#include <bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    struct Node* next;
};
void print(Node* n){
  while(n!=NULL){
    cout<<n->data<<endl;
    n = n->next;
  }
}
void push(Node** head_ref,int data){
  Node* node = new Node();
  Node* last = *head_ref;
  node->data= data;
  node->next=NULL;
  if (*head_ref == NULL){
    *head_ref = node;
    return;
  }
  while (last->next!=NULL){
    last = last->next;
  }
  last->next= node;
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
    print(head);

}


