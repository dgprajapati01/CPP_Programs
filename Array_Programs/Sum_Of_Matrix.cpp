#include <iostream>
using namespace std;

int main()
{
	int rows, cols, sum = 0;

	cout << "Enter Number Of Rows";
	cin >> rows;

	cout << "Enter Number of Columns";
	cin >> cols;

	int matrix[100][100];

	cout << "Enter Matrix Elements";

	for(int i=0; i<rows; i++)
		{
			for(int j=0; j<cols; j++){

				cin >> matrix[i][j];
			}
		} 

		cout << "Matrix is = ";

		for (int i=0; i<rows; i++)
		{
			for(int j=0; j<cols; j++)
			{
				
			sum = sum + matrix[i][j];
			}

		}	


		cout << "Sum Of Matrix ="<< sum;
		
		return 0;
}

/*
g++ Sum_Of_Matrix.cpp -o Summatrix

D:\2. Dhyey Sem 2\CPP_Programs\Array_Programs>Summatrix.exe
Enter Number Of Rows 2
Enter Number of Columns2
Enter Matrix Elements1
2
3
4
Matrix is = Sum Of Matrix =10

*/
