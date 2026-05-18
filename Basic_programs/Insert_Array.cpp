#include <iostream>
using namespace std;

int main() 
{
    int arr[100] = {10, 20, 30, 40, 50};
    int n = 5;

    int element, position;

    cout << "Enter the Element to Insert: ";
    cin >> element;

    cout << "Enter the Position (1 to " << n + 1 << "): ";
    cin >> position;

    
    if (position < 1 || position > n + 1) 
    {
        cout << "Invalid Position!";
    } 
    else 
    {
        
        for (int i = n; i >= position; i--) 
        {
            arr[i] = arr[i - 1];
        }

        
        arr[position - 1] = element;
        n++;

        
        cout << "Array after insertion: ";

        for (int i = 0; i < n; i++) 
        {
            cout << arr[i] << " ";
        }
    }

    return 0;
}

/*

Insert.exe
Enter the Element to Insert: 4
Enter the Position (1 to 6): 2
Array after insertion: 10 4 20 30 40 50

*/