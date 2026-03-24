#include <iostream>
using namespace std;

class Complex{
    private:
    float real, imag;

    public:
    Complex(float r=0, float i=0){
        real = r;
        imag = i;
    }
    void display(){
        cout << real << "+"<< imag << "i"<< endl;
    }
    friend Complex addComplex(Complex c1, Complex c2);
};

Complex addComplex(Complex c1, Complex c2)
{
    Complex result;
    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;
    return result;
}

    int main(){
        Complex c1(2.5, 3.5), c2(1.5, 2.5), sum;

        sum = addComplex(c1, c2);

        cout << "First Complex Number : ";
        c1.display();

        cout << "Second Complex Number : ";
        c2.display();
        
        cout << "Sum of Complex Number : ";
        sum.display();

        return 0;
        
    }