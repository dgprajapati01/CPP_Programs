#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int age;

public:
    
    Student(string n, int a)
    {
        name = n;
        age = a;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};


int main()
{

    Student s1("Dhyey", 19);
    Student s2("Shyamal", 24);
    Student s3("Girish", 47);

    s1.display();
    s2.display();
    s3.display();

    return 0;
}
/*

g++ Constructors.cpp -o constructor

D:\2. Dhyey Sem 2\CPP_Programs\Basic_programs>constructor.exe
Name: Dhyey
Age: 19
Name: Shyamal
Age: 24
Name: Girish
Age: 47


*/