#include <iostream>
using namespace std;

int main() 
{
    int arr[] = {5, 10, 15, 20, 25};
    int n = sizeof(arr) / sizeof(arr[0]);

    int evenCount = 0, oddCount = 0;

    for (int i = 0; i < n; i++) 
    {
        if (arr[i] % 2 == 0) 
        {
            evenCount++;
        } 
        else 
        {
            oddCount++;
        }
    }

    cout << "Number of Even Elements = " << evenCount << endl;
    cout << "Number of Odd Elements = " << oddCount << endl;

    return 0;
}

/*

g++ Odd_Even_Count.cpp -o Count

D:\2. Dhyey Sem 2\CPP_Programs\Basic_programs>Count.exe
Number of Even Elements = 2
Number of Odd Elements = 3

*/