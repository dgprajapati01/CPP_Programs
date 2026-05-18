#include <iostream>
using namespace std;

int main() 
{
    int arr[] =  {1, 2, 3, 4, 6, 4, 10, 12, 2, 6};

    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Duplicate Elements are: ";

    for (int i = 0; i < n; i++) 
    {
        bool isDuplicate = false;

        
        for (int k = 0; k < i; k++) 
        {
            if (arr[i] == arr[k]) 
            {
                isDuplicate = true;
                break;
            }
        }

        
        if (!isDuplicate) 
        {
            for (int j = i + 1; j < n; j++) 
            {
                if (arr[i] == arr[j]) 
                {
                    cout << arr[i] << " ";
                    break; }
            }
        }
    }

    return 0;
}
/*

D:\2. Dhyey Sem 2\CPP_Programs\Basic_programs>Duplicatearr.exe
Duplicate Elements are: 2 4 6

*/