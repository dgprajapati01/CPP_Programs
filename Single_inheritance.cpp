#include <iostream>
using namespace std;

class base{
    public:
    int pub = 10;
    protected:
    int prot = 20;
    private:
    int priv = 30;
};

class PublicDerived : public base{
    public:
    void show(){
        cout << "Public :"<< pub <<" Protected :"<< prot <<endl;

    }
};

class ProtectedDerived :protected base{
    public:
    void show(){
        cout<< "Public Becomes Protected: " << pub << " Protected Reamins Protected: "<< prot<< endl;

    }

};

class privateDerived :private base{
    public:
    void show(){
        cout<< "Public Becomes Private: " << pub << "Protected Becomes Private"<< prot<< endl;

    }
};

int main()
{
    PublicDerived obj1;
    ProtectedDerived obj2;
    privateDerived obj3;

    cout << "Public Inheritance"<< endl;
    cout<< "Accessible from main : " << obj1.pub << endl;

    cout << "\n Protected Inheritance" << endl;
    obj2.show();

    cout << "\n Private Inheritance" << endl;
    obj3.show();

    return 0;
}