#include <iostream>
using namespace std;

int main() 
{
    int rows, cols;

    cout << "Enter Number of Rows";
    cin >> rows;

    cout << "Enter Number of Columns";
    cin >> cols;

    int matrix1[10][10], matrix2[10][10], sum[10][10];

    cout << "Enter Elements of First Matrix \n";

    for (int i=0; i<rows; i++) 
    {
        for (int j=0; j<cols; j++) 
        {
            cin >> matrix1[i][j];
        }
    }

    
    cout << "Enter Elements of Second Matrix \n";
    for (int i=0; i<rows; i++) 
    {
        for (int j=0; j<cols; j++) 
        {
            cin >> matrix2[i][j];
        }
    }

    for (int i=0; i<rows; i++) 
    {
        for (int j=0; j<cols; j++) 
        {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    
    cout << "\n Sum of Both Matrices \n";
    for (int i=0; i<rows; i++) 
    {
        for (int j=0; j<cols; j++) 
        {
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

/*
g++ Add_Two_Matrices.cpp -o Addmatrix

D:\2. Dhyey Sem 2\CPP_Programs\Array_Programs>Addmatrix.exe
Enter Number of Rows 2
Enter Number of Columns 2
Enter Elements of First Matrix
1
2
3
4
Enter Elements of Second Matrix

5
6
7
8

 Sum of Both Matrices
6 8
10 12
*/