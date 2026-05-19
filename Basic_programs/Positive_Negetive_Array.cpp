#include <iostream>
using namespace std;

int main() 
{
    int arr[] = {10, -5, 20, -15, 30, -25, 0};

    int n = sizeof(arr) / sizeof(arr[0]);

    int positiveCount = 0, negativeCount = 0;

    for (int i = 0; i < n; i++) 
    {
        if (arr[i] > 0) 
        {
            positiveCount++;
        } 
        else if (arr[i] < 0) 
        {
            negativeCount++;
        }
    }

    cout << "Number of Positive elements = " << positiveCount << endl;
    cout << "Number of Negative elements = " << negativeCount << endl;

    return 0;

}

/*
++ Positive_Negetive_Array.cpp -o posiarr

D:\2. Dhyey Sem 2\CPP_Programs\Basic_programs>posiarr.exe
Number of Positive elements = 3
Number of Negative elements = 3

*/