#include <bits/stdc++.h>
#include <iostream>
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

int findIndex(Node* head, int x) {
    Node* temp = head;
    int index = 0;
    while (temp != NULL) {
        if (temp->val == x) {
            return index;
        }
        temp = temp->next;
        index++;
    }
    return -1;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        Node* head = NULL;
        int value;
        while (true) {
            cin >> value;
            if (value == -1) {
                break;
            }
            insert(head, value);
        }
        int x;
        cin >> x;
        int result = findIndex(head, x);
        cout << result << endl;
    }
    return 0;
}
