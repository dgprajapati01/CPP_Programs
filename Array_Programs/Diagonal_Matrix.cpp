#include <iostream>
using namespace std;

int main() 
{
    int n;

    
    cout << "Enter the Size of Square Matrix ";
    cin >> n;

    int matrix[100][100];

    
    cout << "Enter Matrix Elements ";

    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            cin >> matrix[i][j];
        }
    }

    
    cout << "Diagonal Elements are \n";

    for (int i = 0; i < n; i++) 
    {
        cout << matrix[i][i] << " ";
    }

    return 0;
}

/*
>g++ Diagonal_Matrix.cpp -o Diagonalmatrix

D:\2. Dhyey Sem 2\CPP_Programs\Array_Programs>Diagonalmatrix.exe
Enter the Size of Square Matrix 2
Enter Matrix Elements 3
1
2
3
Diagonal Elements are
3 3
*/
