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
void print(Node* n){
  while(n!=NULL){
    cout<<n->data<<" ";
    n = n->next;
  }
}
void reverselist(Node** head_ref){
   Node *prev = NULL;
   Node * temp  = NULL;
   Node * running = *head_ref;
   while(running !=NULL){
   temp = running;
   running = running->next;
   temp->next =prev;
   prev = temp;
   }
  *head_ref = prev;

}


int main(){
    int t;
    cin>>t;
  for(int j = 0; j<t;j++){
    Node* head = NULL;
    Node* rev = NULL;

    int n;
    int data;
    cin>>n;
    for(int i = 0; i<n;i++){
        cin>>data;
        insertattail(&head,data);
    }

    reverselist(&head);
    print(head);
    cout<<endl;
}

}

