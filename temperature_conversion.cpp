#include<iostream>
using namespace std;

class Temperature{
public:
    float F, C;

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
    Temperature t;

    cout << "Enter Temperature in Fahrenheit : \n";
    cin >> t.F;

    t.conversion();
    t.display();

    return 0;
}