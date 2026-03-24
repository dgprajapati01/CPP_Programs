#include <iostream>
using namespace std;

class sample{
    private:
    int a, b;

    public:
    void setData(int x, int y){
        a = x;
        b = y;
    }
    friend float calculateMean(sample s);
};

float calculateMean(sample s){
    float mean;
    mean = (s.a +s.b) / 2.0;
    return mean;

}

int main(){
    sample obj;
    obj.setData(10,30);

    float result = calculateMean(obj);

    cout << "Mean of a and b = " << result << endl;

    return 0;
}