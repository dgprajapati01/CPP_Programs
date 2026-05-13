#include <iostream>
using namespace std;

int main() 
{
    double num;

    cout << "Enter a number: ";
    cin >> num;


    if (num > 0) 
    {
        cout << "The number is Positive." << endl;
    } 
        else if (num < 0)
         {
        cout << "The number is Negative." << endl;
    } 
        else 
        {
        cout << "The number is Zero." << endl;
    }

    return 0;
}

/*

g++ Posi_Neg_Or_Zero.cpp  -o Numberscheck

D:\2. Dhyey Sem 2\CPP_Programs\Basic_programs>Numberscheck.exe
Enter a number: 4
The number is Positive.*/


