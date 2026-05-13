#include <iostream>
using namespace std;

int main(){

	double a, b;

	cout << "Enter Two Numbers : ";
	cin >> a >> b;

	if (a > b){
		cout<< "Largest of Two is " << a << endl;
	}
	else if (b > a){
		cout <<"Largest of Two is " << b << endl;
	}
	else {
		cout << "Enter Valid Numbers"<<endl;
	}

	return 0;
}

/*

>g++ Largest_of_2.cpp -o largest

D:\2. Dhyey Sem 2\CPP_Programs\Basic_programs>largest.exe
Enter Two Numbers : 4
10
Largest of Two is 10*/

