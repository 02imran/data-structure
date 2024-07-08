

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Node {
    public: 
        int val;
        Node* next;
        Node* prev;

    Node(int val){
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void print_normal(Node * head){
    Node * temp = head;

    while (temp != NULL)
    {
        cout << temp->val << " " ;
        temp = temp->next;
    }
    cout << endl;
    
}

void print_reverse(Node * tail){
    Node * temp = tail;

    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->prev;
    }
    cout << endl;
    
}


int size(Node * head){
    Node * temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
    
}

void delete_at_pos(Node * head, int pos){
    Node * temp = head;

    for (int i = 1; i <= pos - 1; i++)
    {
       temp = temp->next;
    }
    Node * deleteNote = temp->next;
    temp->next = temp->next->next;
    temp->next->prev = temp;
    delete deleteNote;
}

void delete_tail(Node * &tail){ 
    Node* deleteTail = tail;    
    tail = tail->prev;
    delete deleteTail;
    tail->next = NULL;
}

void delete_head(Node * &head){
    Node * deleteHead = head;
    head = head->next;
    delete deleteHead;
    head->prev = NULL;
}


int main(){
    Node * head = new Node(10);
    Node * a = new Node(20);
    Node * b = new Node(30);
    Node * c = new Node(40);

    Node * tail = c;

    head->next = a;
    a->next = b;
    b->prev = a;
    a->prev = head;
    b->next = c;
    c->prev = b;

    

    int pos;
    cin >> pos;

    if(pos >= size(head)){
        cout << "Invalid"<< endl;
    } else if(pos == 0){
        delete_head(head);
    } else if(pos == size(head) - 1){
        delete_tail(tail);
    } else {
        delete_at_pos(head, pos);
    }

    // delete_at_pos(head, pos);
    // delete_tail(tail);
    
    print_normal(head);
    print_reverse(tail);
    return 0;
}