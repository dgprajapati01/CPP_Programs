#include<iostream>
using namespace std;

class DISTANCE{
    private:
    int feet;
    int inches;

        public:
        void input()
        {
            cout<<"Enter Feet : ";
            cin>> feet;
            cout<< "Enter inches : ";
            cin>> inches;
        }

        void display()
        {
            cout<< feet << " feet " << inches << " inches " << endl;
        }

        DISTANCE add(DISTANCE d1, DISTANCE d2)

        {
            DISTANCE temp;
            temp.feet = d1.feet + d2.feet;
            temp.inches =d1.inches + d2.inches;

            return temp;
        }
};


int main()
{
    DISTANCE d1, d2, sum;
    
    cout << "Enter First Distance : \n";
    d1. input();

    cout << "Enter Second Distance : \n";
    d2.input();

    sum = sum.add(d1, d2);

    cout<< "Sum Of Distances = ";
    sum.display();

    return 0;

}