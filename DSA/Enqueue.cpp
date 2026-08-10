#include <iostream>
using namespace std;
#define size 100

int arr[size];
int front = -1;
int rear = -1;


void show() {
    if (front == -1) {
        cout << "Queue Empty!" << endl;
        return;
    }
    
    cout << "Queue: ";
    for (int i = front; i <= rear; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void enqueue(int value) {
    if (rear == size - 1) {
        cout << "Queue Full!" << endl;
        return;
    }
    
    if (front == -1) {
        front = 0;
    }
    
    rear++;
    arr[rear] = value;
    cout << "Enqueued: " << value << endl;
    
     show();
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
        
    return 0;
}


/*
Enqueued: 10
Queue: 10 
Enqueued: 20
Queue: 10 20 
Enqueued: 30
Queue: 10 20 30 
Enqueued: 40
Queue: 10 20 30 40 
Enqueued: 50
Queue: 10 20 30 40 50  */