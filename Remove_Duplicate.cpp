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

void insertAtTail(Node*& head, int value) {
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

void removeDuplicates(Node*& head) {
    if (head == NULL) return;

    Node* temp = head;
    while (temp != NULL) {
        Node* newNode = temp;
        while (newNode->next != NULL) {
            if (newNode->next->val == temp->val) {
                Node* temp = newNode->next;
                newNode->next = newNode->next->next;
                delete temp;
            } else {
                newNode = newNode->next;
            }
        }
        temp = temp->next;
    }
}

void printList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* head = NULL;
    int value;

    while (cin >> value && value != -1) {
        insertAtTail(head, value);
    }

    removeDuplicates(head);
    printList(head);

    return 0;
}
