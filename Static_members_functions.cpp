#include <iostream>
using namespace std;

class student{
    int roll;
    static int count;

    public:
        void getData()
        {
            roll=++count;
        }
        void display()
        {
            cout<<"Roll No : "<< roll<< endl;
        }
        static void showcount()
        {
            cout<< "Total Students :"<<count << endl;
        }
};

int student :: count=0;

int main()
{
    student S1, S2, S3;

    S1.getData();
    S2.getData();
    S3.getData();

    S1.display();
    S2.display();
    S3.display();

    return 0;
}