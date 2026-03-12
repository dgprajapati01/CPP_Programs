#include<iostream>
using namespace std;

class Temperature{
public:
    float F, C;

    void getdata()
    {
        cout << "Enter Temperature in Fharenhit: ";
        cin>> F;
    }

    void conversion()
    {
        C = (F - 32) * 5 / 9;
    }

    void display()
    {
        cout << "Temperature in Celsius = " << C << endl;
    }
};

int main()
{
    Temperature I, C, A;

    cout << "India \n";
    I.getdata();
    I.conversion();

    cout<<"Canada \n";
    C.getdata();
    C.conversion();

    cout<<"Australia \n";
    A.getdata();
    A.conversion();

    cout << "Converted Temperature : \n";
    
    cout << "India :";
    I.display();

    cout<< "Canada :";
    C.display();

     cout<< "Australia :";
    A.display();
    
    return 0;
}