#include <iostream>
using namespace std; 

class Time{
    public:

    int hours, minutes;

    void input(){

        cout<< "Enter Hours : ";
        cin>> hours;

        cout<< "Enter minutes : ";
        cin>> minutes;
    }

    void display(){

        cout << hours << "hours" << minutes << "minutes" << endl;
    }

    void add(Time t1, Time t2){

        minutes = t1.minutes + t2.minutes;
        hours = t1.hours + t2.hours;

            if (minutes >= 60){
                hours = hours + (minutes / 60);
                minutes =  minutes % 60;
            }
    }
};

int main()
{
    Time t1, t2, result;

    cout<< "Enter First Time : \n";
    t1.input();

    cout << "Enter second Time : \n";
    t2.input();

    result.add(t1, t2);

    cout << "Sum of Time : \n";
    result.display();

    return 0;
}