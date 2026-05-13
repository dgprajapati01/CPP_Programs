#include <iostream>
using namespace std;

int main(){
	int a=10, b=20, temp;

	cout << "Before Swapping a = "<< a << " b = " << b << endl;

	temp = a;
	a = b;
	b = temp;

	cout << "After Swapping a = "<< a << " b = " << b << endl;

	return 0;

}

/* 
>g++ Swap_Numbers.cpp -o Swap

D:\2. Dhyey Sem 2\CPP_Programs\Basic_programs>Swap.exe
Before Swapping a = 10 b = 20
After Swapping a = 20 b = 10
*/