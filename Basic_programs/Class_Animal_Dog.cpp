#include <iostream>
using namespace std;


class Animal
{
public:
    void eat()
    {
        cout << "Animal is Eating" << endl;
    }
};


class Dog : public Animal
{
public:
    void bark()
    {
        cout << "Dog is Barking" << endl;
    }
};


int main()
{
    
    Dog d1;
    d1.eat();
    d1.bark();

    return 0;
}
/*

g++ Class_Animal_Dog.cpp -o Dog

D:\2. Dhyey Sem 2\CPP_Programs\Basic_programs>Dog.exe
Animal is Eating
Dog is Barking
*/
