#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head = NULL;

void addAtHead(int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = head;
    head = newNode;
}

void display() {
    if (head == NULL) {
        cout << "List is empty\n";
        return;
    }
    
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL\n";
}

int main() {
    addAtHead(10);
    display();
    
    addAtHead(20);
    display();
    
    addAtHead(30);
    display();
    
    addAtHead(40);
    display();
    
    return 0;
}

/*
10 -> NULL
20 -> 10 -> NULL
30 -> 20 -> 10 -> NULL
40 -> 30 -> 20 -> 10 -> NULL

*/