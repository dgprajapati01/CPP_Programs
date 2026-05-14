#include <iostream>
using namespace std;

int main (){
	int n, first = 0, second = 1, next;

	cout << "Enter the Number of Terms";
	cin >> n;

	cout << "Fibonacci series"<< endl;

	for (int i=1; i<=n; i++){
		cout << first<< " ";

		next = first + second;
		first = second;
		second = next;
	}

	return 0;
}

/*
g++ Fibonacci_Series.cpp -o Series

D:\2. Dhyey Sem 2\CPP_Programs\Basic_programs>Series.exe
Enter the Number of Terms 5
Fibonacci series
0 1 1 2 3

*/
