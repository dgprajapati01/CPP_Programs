#include <iostream>
using namespace std;

int main(){

	int n, num, rev = 0, digit;

	cout << "Enter a Positive number";
	cin << num;

	n = num;

	while( num > 0){
		digit = num % 10;
		rev = (rev * 10)+digit;
		num = num / 10;
	}

	if (n == rev){
		cout<<n<<"It Is A Palindrome"<<endl;
	}
	else{
		cout<<n<<"It Is Not A Palindrome"<<endl;
	}

	return 0;
}