#include <iostream>
using namespace std;

int main() 
{
    int rows, cols;

    cout << "Enter Number of Rows";
    cin >> rows;

    cout << "Enter Number of Columns";
    cin >> cols;

    int matrix[10][10], transpose[10][10];

    cout << "Enter Matrix Elements \n";
    for (int i=0; i<rows; i++) 
    {
        for (int j=0; j<cols; j++) 
        {
            cin >> matrix[i][j];
        }
    }

    
    for (int i=0; i<rows; i++) 
    {
        for (int j=0; j<cols; j++) 
        {
            transpose[j][i] = matrix[i][j];
        }
    }

    cout << "\n Original Matrix \n";
    for (int i=0; i<rows; i++) 
    {
        for (int j=0; j<cols; j++) 
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\n Transpose Matrix \n";
    for (int i=0; i<cols; i++) 
    {
        for (int j=0; j<rows; j++) 
        {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

/*

g++ Transpose_Matrix.cpp -o Transpose

D:\2. Dhyey Sem 2\CPP_Programs\Array_Programs>Transpose.exe
Enter Number of Rows 2
Enter Number of Columns2
Enter Matrix Elements
1
2
3
4

 Original Matrix
1 2
3 4

 Transpose Matrix
1 3
2 4

*/