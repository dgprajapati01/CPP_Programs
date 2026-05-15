#include <iostream>
#include <algorithm> 
using namespace std;

int main() 
{
    int arr[] = {2, 4, 6, 10, 8, 12};
    int n = sizeof(arr) / sizeof(arr[0]);

    sort(arr, arr + n);

    cout << "Sorted Array";

    for (int i = 0; i < n; i++) 
    {
        cout << arr[i] << " ";
    }

    return 0;
}

/*
g++ Sort_Array.cpp -o Sorting

D:\2. Dhyey Sem 2\CPP_Programs\Basic_programs>Sorting.exe
Sorted Array2 4 6 8 10 12*/
