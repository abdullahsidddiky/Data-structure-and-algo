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

void insertathead(Node** head_ref, int data){
    Node* node = new Node();
    node->data=data;
    node->next=*head_ref;
    *head_ref = node;
}


int main(){
    Node* head = NULL;
    int n;
    int data;
    cin>>n;
    for(int i = 0; i<n;i++){
        cin>>data;
        insertathead(&head,data);
    }
    print(head);

}
