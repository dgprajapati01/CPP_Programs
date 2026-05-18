#include <iostream>
using namespace std;

int main() 
{
    int arr[] = {1, 2, 2, 3, 3, 3, 4, 4, 4, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Frequency of Each Element \n";

    for (int i = 0; i < n; i++) 
    {
        int count = 1;

        bool visited = false;

        for (int k = 0; k < i; k++) 
        {
            if (arr[i] == arr[k]) 
            {
                visited = true;
                break;
            }
        }

        if (visited)
            continue;

        for (int j = i + 1; j < n; j++) 
        {
            if (arr[i] == arr[j]) 
            {
                count++;
            }
        }

        cout << arr[i] << " occurs " << count << " times" << endl;
    }

    return 0;
}

/*

g++ Frequency_Count_Array.cpp -o Freqcount

D:\2. Dhyey Sem 2\CPP_Programs\Basic_programs>Freqcount.exe
Frequency of Each Element
1 occurs 1 times
2 occurs 2 times
3 occurs 3 times
4 occurs 4 times

*/