#include <iostream>
using namespace std;

int main() 
{
    int arr[] = {1, 2, 3, 4, 6, 4, 10, 12, 2, 6};

    int n = sizeof(arr) / sizeof(arr[0]);

    int temp[n], newSize = 0;


    for (int i = 0; i < n; i++) 
    {
        bool isDuplicate = false;

        for (int j = 0; j < newSize; j++) 
        {
            if (arr[i] == temp[j]) 
            {
                isDuplicate = true;
                break;
            }
        }

        if (!isDuplicate) 
        {
            temp[newSize] = arr[i];
            newSize++;
        }
    }

    cout << "Array after Removing Duplicates: ";

    for (int i = 0; i < newSize; i++) 
    {
        cout << temp[i] << " ";
    }

    return 0;
}


/*
g++ Remove_Duplicate_Arr.cpp -o Removearr

D:\2. Dhyey Sem 2\CPP_Programs\Basic_programs>Removearr.exe
Array after Removing Duplicates: 1 2 3 4 6 10 12

*/