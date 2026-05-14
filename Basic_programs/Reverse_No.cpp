#include <iostream>
using namespace std;

int main() {
    int num, rev = 0, remainder;

    cout << "Enter a number: ";
    cin >> num;

    while (num != 0) {
        remainder = num % 10;         
        rev = rev * 10 + remainder; 
        num = num / 10;               
    }

    cout << "Reversed number = " << rev;

    return 0;
}


/*
g++ Reverse_No.cpp -o Reverse

D:\2. Dhyey Sem 2\CPP_Programs\Basic_programs>Reverse
Enter a number: 34
Reversed number = 43
*/