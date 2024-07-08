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

void insertAtAnyPos(Node * head, int v, int pos){
    Node* newNode = new Node(v);
    Node * tmp  = head;

    for (int i = 0; i <pos; i++)
    {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
    cout << endl<< endl;
    
}

int main(){
    Node *head = NULL;
    cout << "Option1: Insert" << endl;
    cout << "Option2: Print" << endl;
    cout << "Option3: Insert at any position" << endl;
    cout << "Option4: terminate" << endl;

    while (true)
    {
    int op;
    cin >> op;

    if(op == 1){
        int v;
        cin >> v;

        insertAtTail(head, v);
    } else if(op == 2){
        cout << "List list";
        linkedList(head);
    } else if(op == 3){
        int v, pos;
        cout << "Enter positon" << endl;
        cin >> pos;
        cout << "Enter value" << endl;
        cin >> v;
        insertAtAnyPos(head, v, pos);
    }
    else if(op ==4){
        break;
    }
    
    }
    
    return 0;
}