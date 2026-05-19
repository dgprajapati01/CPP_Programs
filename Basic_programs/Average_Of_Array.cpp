#include <iostream>
using namespace std;

int main() 
{
    int arr[] = {10, 20, 30, 40, 50};

    int n = sizeof(arr) / sizeof(arr[0]);

    int sum = 0;
    float average;

    for (int i = 0; i < n; i++) 
    {
        sum = sum + arr[i];
    }

    average = (float) sum / n;

    cout << "Average of Array Elements = " << average << endl;

    return 0;
}