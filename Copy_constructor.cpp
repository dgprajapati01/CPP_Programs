#include <iostream>
#include <string>
using namespce std;

class Car{
private:
	string brand;
	int year;

public:
	Car(string b, int y) : brand(b), year(y){
		cout << "Parameterized Constructor called for"<< brand<< endl;
}

	Car(const Car &obj){
		brand = obj.brand;
		year = obj.year;
		cout<< "Copy Constructor called for"<< brand<<endl;
	}
	void display(){
		cout<<"Brand:"<< brand <<"Year"<<endl;
	}
};

int main(){
	Car car1("Hyundai", 2022);

	car car2(car1);
	Car car3 = car1;

	cout<<"\n car Details: "<<endl;
	car1.display();
	car2.display();
	car3.display();

	return 0;
}