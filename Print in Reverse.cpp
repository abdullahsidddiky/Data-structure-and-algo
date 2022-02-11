#include <bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    struct Node* next;
};
void insertattail(Node** head_ref, int data){
    Node* node = new Node();
    Node* last = *head_ref;
    node->data = data;
    node->next = NULL;
    if(*head_ref == NULL){
        //last = node;
        *head_ref=node;
        return;
    }
    while(last->next != NULL){
        last=last->next;
    }
    last->next = node;

}

void reverseprint(Node* node){
  if(node == NULL){
    return;
  }
  reverseprint(node->next);
  cout<<node->data<<endl;
}

int main(){
    int t;
    cin>>t;
  for(int j = 0; j<t;j++){
    Node* head = NULL;

    int n;
    int data;
    cin>>n;
    for(int i = 0; i<n;i++){
        cin>>data;
        insertattail(&head,data);
    }
    reverseprint(head);
}

}
