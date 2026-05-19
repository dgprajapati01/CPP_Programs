#include <iostream>
using namespace std;

int main()
{

	int arr[] = {10, 20, 30, 40, 50};
	int n = sizeof(arr) / sizeof (arr[0]);

	cout << "Array Elements with Index \n";

	for (int i=0; i<n; i++)
	{
		cout << "Index" << i << " " << arr[i] << endl;
	}

	return 0;
}

/*

g++ Print_Index.cpp -o Printindex

D:\2. Dhyey Sem 2\CPP_Programs\Basic_programs>Printindex.exe
Array Elements with Index
Index0 10
Index1 20
Index2 30
Index3 40
Index4 50

*/