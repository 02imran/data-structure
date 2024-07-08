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


    void insert(Node * &head,int value) {
        
        Node* newNode = new Node(value);
        Node* temp = head;
        
        if (head == NULL) {
            head = newNode;
            return;
            
        } 
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }

void printFunc(Node * head){
    Node * tmp  = head;
    while (tmp != NULL)
    {
        cout << tmp->val  << " ";
        tmp = tmp->next; 
    }
    cout << endl << endl;
}

    int findMin(Node* head) {
        int minVal = INT_MAX;
        Node* temp = head;
        while (temp != NULL) {
            if (temp->val < minVal) {
                minVal = temp->val;
            }
            temp = temp->next;
        }
        return minVal;
    }

    int findMax(Node* head) {
        int maxVal = INT_MIN;
        Node* temp = head;
        while (temp != NULL) {
            if (temp->val > maxVal) {
                maxVal = temp->val;
            }
            temp = temp->next;
        }
        return maxVal;
    }

    int findDifference(Node* head) {
        int maxVal = findMax(head);
        int minVal = findMin(head);
        return maxVal - minVal;
    }
int main(){
    Node *head = NULL;
    int value;
    while (true) {
        cin >> value;
        if (value == -1) {
            break;
        }
        insert(head, value);
    }

    int differance = findDifference(head);
    cout << differance << endl;
    
    
    return 0;
}