#include <iostream>
using namespace std;

int main() 
{
    int arr[] = {39, 41, 38, 26, 10, 99};
    int n = sizeof(arr) / sizeof(arr[0]);

    
    int min_val = arr[0];

    
    for (int i = 1; i < n; i++)
     {
        if (arr[i] < min_val) 
        {
            min_val = arr[i];
        }
    }

    cout << "The smallest element is" << min_val<< endl;
    
    return 0;
}
/*

g++ Smallest_Array.cpp -o Smallarray

D:\2. Dhyey Sem 2\CPP_Programs\Basic_programs>Smallarray.exe
The smallest element is10

*/
