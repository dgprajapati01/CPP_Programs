#include <iostream>
using namespace std;

int main() 
{
    int rows, cols;

    cout << "Enter Number of Rows";
    cin >> rows;

    cout << "Enter Number of Columns";
    cin >> cols;

    int matrix1[10][10], matrix2[10][10], multiply[10][10];

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
            multiply[i][j] = matrix1[i][j] * matrix2[i][j];
        }
    }

    
    cout << "\n Multiplication of Both Matrices \n";
    for (int i=0; i<rows; i++) 
    {
        for (int j=0; j<cols; j++) 
        {
            cout << multiply[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
/*

g++ Multiply_Matrices.cpp -o Multiplymatix

D:\2. Dhyey Sem 2\CPP_Programs\Array_Programs>Multiplymatix.exe
Enter Number of Rows 2
Enter Number of Columns 2
Enter Elements of First Matrix
1
2
3
4
Enter Elements of Second Matrix
1
2
3
4

 Multiplication of Both Matrices
1 4
9 16


*/
