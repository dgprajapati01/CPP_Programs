#include <iostream>
#include <string>
using namespace std;

class Employee{
private:

    int id;
    string name;

    public:
    Employee(int id, string name){
        this -> id = id;
        this-> name = name;

    }

    Employee& setID (int id) {
        this -> id = id;
        return*this;
    }

    Employee& setname (string name){
        this -> name = name;
        return*this;
    }

        void display(){
            cout <<"ID : "<< this ->id << "Name : "<< this->name << endl;
        }

};

   int main()
{
    Employee emp1 (1039, "Dhyey");
    emp1.display();

    Employee emp2(0, "" );
    emp2.setID (1040).setname("Shyamal");
    
    cout<<"After Method Changing : ";
    emp2.display();

    return 0;
}