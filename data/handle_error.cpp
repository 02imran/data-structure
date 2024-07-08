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

    for (int i = 0; i <pos-1; i++)
    {
        tmp = tmp->next;
        if(tmp == NULL){
            cout << "Invalid Index" << endl << endl;
            return;
        }
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
    cout << endl<< endl;
    
}

void insertAtHead(Node * &head, int v){
    Node * newNode = new Node(v);
    newNode->next = head;
    head = newNode;
    cout << "Head updated"<< endl << endl;

}

void deleteValueWithPos(Node* head,int pos){
    Node* temp = head;
    for (int i = 0; i < pos-1; i++)
    {
        temp = temp->next;
        if(temp == NULL){
            cout << "Invalid Index" << endl << endl;
            return;
        }
    }
    if(temp->next == NULL){
            cout << "Invalid Index" << endl << endl;
            return;
    }
    Node * deleteNode = temp->next;
    temp->next = temp->next->next;
    delete deleteNode;
    
}

void deleteHead(Node* &head){
        if(head == NULL){
            cout << "Head is not available" << endl << endl;
            return;
    }
    Node* deleteHead = head;
    head = head->next;
    delete deleteHead;
    cout << "Head deleted" << endl;
}
int main(){
    Node *head = NULL;
    cout << "Option1: Insert" << endl;
    cout << "Option2: Print" << endl;
    cout << "Option3: Insert at any position" << endl;
    cout << "Option4: Insert at head" << endl;
    cout << "Option5: Delete node" << endl;
    cout << "Option6: Delete Head" << endl;
    cout << "Option7: terminate" << endl;

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
        if(pos==0){
            insertAtHead(head, v);
        } else {
            insertAtAnyPos(head, v, pos);
        }
        
    } else if(op== 4){
        int v;
        cout << "Enter value";
        cin >> v;
        insertAtHead(head, v);
    } else if(op == 5){
        int pos;
        cout << "Enter position ";
        cin >> pos;
        if(pos == 0){
            deleteHead(head);
        } else {
            deleteValueWithPos(head, pos);
        }
        
    }else if(op == 6){
        cout << "Enter position" << endl;
        deleteHead(head);
    }
    else if(op ==7){
        break;
    }
    
    }
    
    return 0;
}