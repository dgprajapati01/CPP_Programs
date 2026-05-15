#include <iostream>
using namespace std;

int main() 
{
    int arr[] = {10, 20, 30, 40, 50};

    int size = sizeof(arr) / sizeof(arr[0]); 

    int sum = 0;

    for (int i = 0; i < size; i++)
     {
        sum += arr[i];
    }

    cout << "The Sum of Array Elements is " << sum << endl;

    return 0;
}

/*
g++ Sum_Of_Array.cpp -o Sumarray

D:\2. Dhyey Sem 2\CPP_Programs\Basic_programs>Sumarray.exe
The Sum of Array Elements is 150
*/
