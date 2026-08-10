#include <iostream>
using namespace std;

int main()
{
	int rows, cols;
	cout<< " Enter the Number Of Rows";
	cin >> rows;

	cout<< "Enter the number of Columns";
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
		for (int j=0; j<cols; j++){
			transpose[j][i] = matrix[i][j];

		}
	}



	cout << " Original Matrix";
	for (int i=0; i<rows; i++){
		for (int j=0; j<cols; j++)
		{
			cout << matrix[i][j]<<" ";

		}
		cout<< endl;
	}


	cout<< "Transpose Matrix \n";
	for (int i=0; i<cols; i++){
		for(int j=0; j<rows; j++){
			cout << transpose[i][j] << " ";

		}
		cout << endl;
	}

	return 0;
}