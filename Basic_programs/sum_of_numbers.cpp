#include <iostream>
using namespace std;

int main(){

	int num1, num2, sum;

	cout << "Enter the First Number : ";
	cin >> num1;

	cout << "Enter the Second Number : ";
	cin >> num2;

	sum=num1+num2;

	cout << "The Sum is :"<< sum << endl;

	return 0;
}
/*g++ sum_of_numbers.cpp -o sum

D:\2. Dhyey Sem 2\CPP_Programs\Basic_programs>sum.exe
Enter the First Number : 6
Enter the Second Number : 5
The Sum is :11
*/