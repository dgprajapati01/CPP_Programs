#include <iostream>
using namespace std;

class Rectangle
 {
private:

    double length;
    double width;

public:
    
    Rectangle(double l, double w) : length(l), width(w) {}

    
    double calculateArea()
     {
        return length * width;
    }
};


int main() 
{
    
    Rectangle myRect(50, 100);

    cout << "Area of Rectangle" << myRect.calculateArea() << endl;

    return 0;
}

/*
g++ Area_Of_Rect.cpp -o Arearect

D:\2. Dhyey Sem 2\CPP_Programs\Basic_programs>Arearect.exe
Area of Rectangle5000

*/