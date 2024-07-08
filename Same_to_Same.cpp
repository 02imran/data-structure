#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* next;

    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

void insert(Node*& head, int value) {
    Node* newNode = new Node(value);
    if (head == NULL) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

bool areTheySame(Node* head1, Node* head2) {
    Node* temp1 = head1;
    Node* temp2 = head2;
    
    while (temp1 != NULL && temp2 != NULL) {
        if (temp1->val != temp2->val) {
            return false;
        }
        temp1 = temp1->next;
        temp2 = temp2->next;
    }

    if (temp1 != NULL || temp2 != NULL) {
        return false;
    }
    
    return true;
}

int main() {
    Node* head1 = NULL;
    Node* head2 = NULL;
    int value;

    while (true) {
        cin >> value;
        if (value == -1) {
                break;
        }
        insert(head1, value);
    }
    
    while (true) {
        cin >> value;
        if (value == -1) {
                break;
        }
        insert(head2, value);
    }
    
    if (areTheySame(head1, head2)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}
