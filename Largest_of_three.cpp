#include<iostream>
using namespace std;

void largest(int &a, int &b, int &c)
{
    if (a >=b && a >=c)
    cout<< "Largest Number is : "<< a;
    
        else if (b >=a && b >=c)
        cout<<" Largest Number Is : "<< b;

            else
            cout<<"Largest Number Is :"<< c;

}

int main()
{
    int a, b, c;
    cout<<"Enter Three Integer :";
    cin>> a >> b >> c;

    largest (a,b,c);

    return 0;
}