#include <iostream>
using namespace std;

class sample{
    private:
    int a, b;

    public:
    sample (int x, int y) : a(x), b(y){}
    
    friend float calculateMean (sample s);

};

float calculateMean(sample s){
    return (float)(s.a + s.b) / 2;
}

int main (){
    sample obj(30, 60);
    cout << "The Mean Of a and b is :" << calculateMean(obj)<<endl;

    return 0;
}