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
    cout << "Added " << value << " at head\n";
}

void addAtEnd(int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = NULL;
    
   
    if (head == NULL) {
        head = newNode;
    } else {

        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
    cout << "Added " << value << " at end\n";
}

void display() {
    if (head == NULL) {
        cout << "List is empty\n";
        return;
    }
    
    cout << "List: ";
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data;
        if (temp->next != NULL) {
            cout << " -> ";
        }
        temp = temp->next;
    }
    cout << " -> NULL\n";
}

int main() {
    cout << "--- Adding at Head ----\n";
    addAtHead(10);
    display();
    
    addAtHead(20);
    display();
    
    addAtHead(30);
    display();
    
    cout << "\n--- Adding at End ----\n";
    addAtEnd(40);
    display();
    
    addAtEnd(50);
    display();
    
    addAtEnd(60);
    display();
    
   
    
    return 0;
}


/*

--- Adding at Head ----
Added 10 at head
List: 10 -> NULL
Added 20 at head
List: 20 -> 10 -> NULL
Added 30 at head
List: 30 -> 20 -> 10 -> NULL

--- Adding at End ----
Added 40 at end
List: 30 -> 20 -> 10 -> 40 -> NULL
Added 50 at end
List: 30 -> 20 -> 10 -> 40 -> 50 -> NULL
Added 60 at end
List: 30 -> 20 -> 10 -> 40 -> 50 -> 60 -> NULL

*/