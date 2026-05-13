#include <iostream>
using namespace std;

int main(){

	int num;

	cout<<"Enter the Number";
	cin>>num;

	if(num % 2 == 0 ){
		cout<< "The Number is Even"<< endl;
	}
	else{
		cout<< "The Number is Odd"<< endl;
	}

	return 0;
}

/* 
g++ Odd_Even.cpp -o evenorodd

D:\2. Dhyey Sem 2\CPP_Programs\Basic_programs>evenorodd.exe
Enter the Number3
The Number is Odd

*/