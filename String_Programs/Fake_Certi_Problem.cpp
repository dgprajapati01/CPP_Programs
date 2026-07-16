#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() 
{

    int T, N;
    cin >> T >> N;

    while (T--) 
    {
        string S;
        cin >> S;

        int ones = 0;
        int maxZero = 0, currZero = 0;

        for (char c : S) 
        {
            if (c == '1')
             {
                ones++;
                currZero = 0;
            } 
            else {
                currZero++;
                maxZero = max(maxZero, currZero);
            }
        }

        cout << ones + maxZero << "\n";
    }

    return 0;
}