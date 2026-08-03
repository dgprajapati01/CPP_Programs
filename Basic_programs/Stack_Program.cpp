#include <iostream>
using namespace std;
#define n 5
int i;
int top = -1;

int st[n];

void show(int st[], int s)

{
    cout << "The Element of the Stack are" << endl;
    for (int i=top; i>=0; i--)
    cout<<st[i]<< endl;

}
void push(int x)
{
    if (top==n-i)
    cout<<" stack overflow"<< endl;
    else;
    {
        top++;
        st[top]=x;
        cout<< "Now Element Inserted "<< x << endl;
    }
    show(st, n);
}

void pop()
{
    if (top==-1)
    cout<<" stack is underflow"<< endl;
    else
    {
       st[top]= 1;
       top--;
       cout<< "Top Element Deleted "<< endl;
    }
    show(st, n);
}
int peek()
{return st[top];
}
int main ()
{
    push (10);
    push (20);
    push(30);
    pop();
    pop();
    push(40);

    cout << peek;
}