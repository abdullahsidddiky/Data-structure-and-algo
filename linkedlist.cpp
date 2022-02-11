#include <iostream>
using namespace std;
struct Node {
    int data;
    struct Node* next;

};
void print(Node* n){
    while (n != NULL){
        cout << n->data<< " " ;
        n = n->next ;
    }
}
void push(Node** head_ref, int newdata){
    Node* newnode = new Node();
    newnode->data = newdata;
    newnode->next = *head_ref;
    *head_ref = newnode;
}
void append(Node** head_ref , int data ){
    Node* newnode = new Node();
    Node* last = *head_ref;
    newnode->data = data;
    newnode->next = NULL;
    if(*head_ref ==NULL){
        *head_ref = newnode;
        return;
    }
    while(last->next !=NULL){
        last = last->next;
    }
    last->next = newnode;
    return;
}

int main(){

    Node* head = NULL;
    append(&head, 6);
    append(&head, 7);
    append(&head, 8);
    print(head);


}
