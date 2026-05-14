#include <iostream>
using namespace std;

int main(){
	int num, i;
	bool isprime = true;

	cout << "Enter a Number";
	cin >> num;

	if (num <= 1){
		isprime = false;
	}
	else{
		for (i=2; i < num; i++){
			if (num % i == 0){
				isprime = false;
				break;
			}
		}
	}


	if (isprime)
		cout << num << "Is A Prime Number";
	else
		cout << num << "Is Not A Prime Number";

	return 0;
}