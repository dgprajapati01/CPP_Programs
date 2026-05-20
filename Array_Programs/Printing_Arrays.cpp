#include <iostream>
using namespace std;

int main()
{
	int rows, cols;

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
				cout << matrix[i][j] << " ";
			}
			cout << endl;

		}

		return 0;
}

/*


D:\2. Dhyey Sem 2\CPP_Programs\Array_Programs>Printarr.exe
Enter Number Of Rows2
Enter Number of Columns2
Enter Matrix Elements1
2
3
4
Matrix is = 1 2
3 4

*/
