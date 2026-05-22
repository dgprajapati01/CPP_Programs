#include <iostream>
using namespace std;

int main() 
{
    int rows, cols;

    
    cout << "Enter number of Rows";
    cin >> rows;

    cout << "Enter number of Columns";
    cin >> cols;

    int matrix[100][100];

    
    cout << "Enter Matrix Elements";

    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            cin >> matrix[i][j];
        }
    }

    
    cout << "Sum of each row \n";

    for (int i = 0; i < rows; i++) 
    {
        int sum = 0;

        for (int j = 0; j < cols; j++) 
        {
            sum += matrix[i][j];
        }

        cout << "Row " << i + 1 << " Sum = " << sum << endl;
    }

    return 0;
}

/*

g++ Sum_Row_Matrix.cpp -o Rowsum

D:\2. Dhyey Sem 2\CPP_Programs\Array_Programs>Rowsum.exe
Enter number of Rows 2
Enter number of Columns 2
Enter Matrix Elements1

2
3
4
Sum of each row
Row 1 Sum = 3
Row 2 Sum = 7


*/