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
    cout << endl << endl;
    
}
int main(){
    int val;
    Node * head = NULL;

    while (true)
    {
        cin >> val;
        if(val == -1){
            break;
        }
        insertAtTail(head, val);
    }
    linkedList(head);
    
    return 0;
}