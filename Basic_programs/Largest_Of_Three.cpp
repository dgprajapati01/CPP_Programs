#include <iostream>
using namespace std;

int main(){

	double a, b, c;

	cout << "Enter Two Numbers : ";
	cin >> a >> b >> c;

	if (a >= b && a >= c){
		cout<< "Largest of Three Number is " << a << endl;
	}
	else if (b >= a && b >= c){
		cout <<"Largest of Three Number is " << b << endl;
	}
	else {
		cout << "Largest of Three Number is "<< c << endl;
	}

	return 0;
}
/*

>g++ Largest_Of_3.cpp -o largest

D:\2. Dhyey Sem 2\CPP_Programs\Basic_programs>largest.exe
Enter Two Numbers : 6
7
8
Largest of Three Number is 8


*/