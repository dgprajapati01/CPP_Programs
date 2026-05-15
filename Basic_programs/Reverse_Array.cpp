#include <iostream>
using namespace std;

int main() 
{
    int n;

    cout << "Enter the Size of Array";
    cin >> n;

    int arr[n];
    
    cout << "Enter Array Elements ";

    for (int i = 0; i < n; i++) 
    {
        cin >> arr[i];
    }

    for (int i = n - 1; i >= 0; i--) 
    {
        cout << arr[i] << " ";
    }

    return 0;
}
/*
g++ Reverse_Array.cpp -o Reversearray

D:\2. Dhyey Sem 2\CPP_Programs\Basic_programs>Reversearray.exe
Enter the Size of Array4
Enter Array Elements 1
2
3
4
4 3 2 1
*/