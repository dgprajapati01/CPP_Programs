#include <iostream>
using namespace std;

#define SIZE 5

int arr[SIZE];
int front = -1;
int rear = -1;


void display()
{
    if (front == -1)
    {
        cout << "Queue Empty!" << endl;
        return;
    }

    cout << "Queue: ";

    int i = front;

    while (true)
    {
        cout << arr[i] << " ";

        if (i == rear)
            break;

        i = (i + 1) % SIZE;
    }

    cout << endl;
}


void enqueue(int value)
{
    
    if ((rear + 1) % SIZE == front)
    {
        cout << "Queue Full!" << endl;
        return;
    }

    if (front == -1)
    {
        front = 0;
        rear = 0;
    }
    else
    {
        rear = (rear + 1) % SIZE;
    }

    arr[rear] = value;

    cout << "Enqueued: " << value << endl;

    display();
}


void dequeue()
{
    if (front == -1)
    {
        cout << "Queue Empty!" << endl;
        return;
    }

    cout << "Dequeued: " << arr[front] << endl;

    // Only one element
    if (front == rear)
    {
        front = -1;
        rear = -1;
    }
    else
    {
        front = (front + 1) % SIZE;
    }

    display();
}

int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);

    dequeue();
    dequeue();

    enqueue(60);
    enqueue(70);

    display();

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
Queue: 10 20 30 40 50 
Dequeued: 10
Queue: 20 30 40 50 
Dequeued: 20
Queue: 30 40 50 
Enqueued: 60
Queue: 30 40 50 60 
Enqueued: 70
Queue: 30 40 50 60 70 
Queue: 30 40 50 60 70  
*/