#include <iostream>
using namespace std;

int main() 
{
    int arr[] = {5, 6, 7, 8, 9, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    int max_val = arr[0];

  
    for (int i = 1; i < n; i++)
     {
        if (arr[i] > max_val) 
        {
            max_val = arr[i]; 
        }
    }

    cout << "The largest element is" << max_val << endl;

    return 0;
}

/*
g++ Max_Size_Array.cpp -o Maxarray

D:\2. Dhyey Sem 2\CPP_Programs\Basic_programs>Maxarray.exe
The largest element is9
*/