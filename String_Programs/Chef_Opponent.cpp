#include <iostream>
#include <string>
using namespace std;

int main() 
{
    int T;
    cin >> T;

    while (T--)
     {
        string S;
        cin >> S;

        int chef = 0, opponent = 0;

        for (char c : S) {
            if (c == '1')
                chef++;
            else
                opponent++;
        }

        if (chef > opponent)
            cout << "WIN" << endl;
        else
            cout << "LOSE" << endl;
    }

    return 0;
}