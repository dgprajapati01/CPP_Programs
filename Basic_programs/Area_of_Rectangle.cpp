#include <iostream>
using namespace std;

int main(){
	double length, width, area;

	cout << "Enter the Lenght Of Rectangle :" << endl; 
	cin >> length;

	cout << "Enter the Width of Rectangle :"<< endl;
	cin >> width;

	area = length * width; 

	cout << "The Area of Rctangle is :"<< area << endl;

	return 0;
}

/* >g++ Area_of_Rectangle.cpp -o Area

D:\2. Dhyey Sem 2\CPP_Programs\Basic_programs>Area.exe
Enter the Lenght Of Rectangle :
2
Enter the Width of Rectangle :
2
The Area of Rctangle is :4
*/