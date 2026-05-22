#include <iostream>
using namespace std;

int main() 
{
    int rows, cols;

    cout << "Enter Number of Rows";
    cin >> rows;

    cout << "Enter Number of Columns";
    cin >> cols;

    int matrix[rows][cols];

    cout << "Enter Matrix Elements \n";
    for (int i=0; i<rows; i++) 
    {
        for (int j=0; j<cols; j++) 
        {
            cin >> matrix[i][j];
        }
    }

    int largest = matrix[0][0];

    for (int i=0; i<rows; i++) 
    {
        for (int j=0; j<cols; j++) 
        {
            if (matrix[i][j] > largest) 
            {
                largest = matrix[i][j];
            }
        }
    }

    cout << "Largest Element in the Matrix = " << largest;

    return 0;
}


/*
>g++ Largest_Element_Matrix.cpp -o Largest

D:\2. Dhyey Sem 2\CPP_Programs\Array_Programs>Largest.exe
Enter Number of Rows 2
Enter Number of Columns 2
Enter Matrix Elements
1
2
3
4
Largest Element in the Matrix = 4 */