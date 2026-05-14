#include <iostream>
using namespace std;

int main(){
	int n, sum = 0;
	cout << "Enter A Positive Integer";
	cin >> n;

	for (int i = 1; i <= n ; ++i){
		sum += i;
	}
	cout << "Sum Of First" << "Natural Numbers = " << sum << endl;

	return 0;
}


/*

g++ Sum_Of_N_Numbers.cpp -o SumN

D:\2. Dhyey Sem 2\CPP_Programs\Basic_programs>SumN.exe
Enter A Positive Integer3
Sum Of FirstNatural Numbers = 6


*/