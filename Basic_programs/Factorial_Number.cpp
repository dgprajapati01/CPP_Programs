#include <iostream>
using namespace std;

int main() 
{
    int num, i;

    long factorial = 1;

    cout << "Enter a number: ";
    cin >> num;

    
    if (num < 0)
     {
        cout << "Factorial is not defined for negative numbers.";
    } 
    else 
    {
        for ( i = 1; i <= num; i++) {
            factorial *= i;
        }

        cout << "Factorial of " << num << " : " << factorial;
    }

    return 0;
}

/*

g++ Factorial_Number.cpp -o Factorial

D:\2. Dhyey Sem 2\CPP_Programs\Basic_programs>Factorial.exe
Enter a number: 5
Factorial of 5 : 120*/

