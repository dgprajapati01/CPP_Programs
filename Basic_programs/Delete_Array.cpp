#include <iostream>
using namespace std;

int main() 
{
    int arr[100] = {10, 20, 30, 40, 50};
    int n = 5;

    int position;

    cout << "Enter the Position to Delete (1 to " << n << "): ";
    cin >> position;


    if (position < 1 || position > n) 
    {
        cout << "Invalid Position!";
    } 
    else 
    {
        
        for (int i = position - 1; i < n - 1; i++) 
        {
            arr[i] = arr[i + 1];
        }

        n--;


        cout << "Array after Deletion Of Element";

        for (int i = 0; i < n; i++) 
        {
            cout << arr[i] << " ";
        }
    }

    return 0;
}

/*

g++ Delete_Array.cpp -o Deletearr

D:\2. Dhyey Sem 2\CPP_Programs\Basic_programs>Deletearr.exe
Enter the Position to Delete (1 to 5): 3
Array after Deletion Of Element10 20 40 50

*/