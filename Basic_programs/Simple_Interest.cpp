#include <iostream>
using namespace std;

int main() 
{
    float p, r, t, si;

    
    cout << "Enter Principal amount: ";
    cin >> p;

    cout << "Enter Rate of interest: ";
    cin >> r;

    cout << "Enter Time: ";
    cin >> t;

    
    si = (p * r * t) / 100;

    
    cout << "Simple Interest = " << si << endl;

    return 0;
}
