#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Node {
    public: 
        int val;
        Node* next;

    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};

void insertAtTail(Node * &head, int v){
    Node * newNode = new Node(v);
    Node * tmp = head;

    if(head == NULL){
        head = newNode;
        return;
    } 

    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newNode;
    
}

void linkedList(Node * head){
    Node * tmp  = head;
    while (tmp != NULL)
    {
        cout << tmp->val  << " ";
        tmp = tmp->next; 
    }
    cout << endl;
    
}

int main(){
    Node *head = NULL;
    cout << "Option1: Insert" << endl;

    while (true)
    {
    int op;
    cin >> op;

    if(op == 1){
        int v;
        cin >> v;

        insertAtTail(head, v);
    } else if(op == 2){
        linkedList(head);
    } else if(op ==3){
        break;
    }
    
    }
    
    return 0;
}