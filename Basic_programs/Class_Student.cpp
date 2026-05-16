#include <iostream>
#include <string>
using namespace std;


class Student {
public:
    string name;
    int marks;

    
    Student(string n, int m) {
        name = n;
        marks = m;
    }

    void display() 
    {
        cout << "Student" << name << "Marks" << marks << endl;
    }
};


int main()
 {
    Student s1("Dhyey", 39);
    s1.display();
    
    return 0;
}

/*
g++ Class_Student.cpp -o Student

D:\2. Dhyey Sem 2\CPP_Programs\Basic_programs>Student.exe
StudentDhyeyMarks39

*/