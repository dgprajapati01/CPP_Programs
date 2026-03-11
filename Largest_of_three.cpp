#include<iostream>
using namespace std;

void largest(int &a, int &b, int &c)
{
    if (a >=b && a >=c)
    cout<< "Largest Number is : \n"<< a;
    
        else if (b >=a && b >=c)
        cout<<" Largest Number Is :\n "<< b;

            else
            cout<<"Largest Number Is :\n"<< c;

}

int main()
{
    int a, b, c;
    cout<<"Enter Three Integer :\n";
    cin>> a >> b >> c;

    largest (a,b,c);

    return 0;
}