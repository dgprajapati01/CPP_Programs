#include <iostream>
#include<string>
using namespace std;

class Student {
    protected:
    int rollnumber;
    string name;

public:
void getStudentData(){
    cout<< "Enter Roll Number : ";
    cin>> rollnumber;

    cout<< "Enter Name : ";
    cin.ignore();
    getline(cin, name); 
}

};

class Test {
    protected:
        float mark1, mark2;
    public:
        void getMarks(){
            cout<< "Enter Marks For Subject 1 : ";
            cin>>mark1;

            cout <<"Enter Marks For Subject 2 : ";
            cin>> mark2;

        }
};



class Result : public Student, public Test {
    private:
    float total;

    public:
    void displayresult()
    {

     total = mark1 + mark2;

    cout<< "\n Student Performance"<<endl;
    cout<<"Roll No :"<< rollnumber<<endl;
    cout<<"Name:"<< name << endl;
    cout<<"Mark 1: "<< mark1 << endl;
    cout<<"Mark 2: "<< mark2 << endl;
    cout<<"Total : "<< total << "/200" << endl;

    }
};


int main(){
    Result studentResult;

     studentResult.getStudentData();
    studentResult.getMarks();

    studentResult.displayresult();

    return 0;
}


