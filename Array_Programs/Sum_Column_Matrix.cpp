#include <iostream>
using namespace std;

int main() 
{
    int rows, cols;

    
    cout << "Enter Number of Rows";
    cin >> rows;

    cout << "Enter Number of Columns";
    cin >> cols;

    int matrix[100][100];

    
    cout << "Enter Matrix Elements \n";
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            cin >> matrix[i][j];
        }
    }


    cout << "Sum of Each Column \n";

    for (int j = 0; j < cols; j++) 
    {
        int sum = 0;

        for (int i = 0; i < rows; i++) 
        {
            sum += matrix[i][j];
        }

        cout << "Column" << j + 1 << " Sum = " << sum << endl;
    }

    return 0;
}
/*

g++ Sum_Column_Matrix.cpp -o Columnsum

D:\2. Dhyey Sem 2\CPP_Programs\Array_Programs>Columnsum
Enter Number of Rows 2
Enter Number of Columns 2
Enter Matrix Elements
1
2
3
4
Sum of Each Column
Column1 Sum = 4
Column2 Sum = 6

*/