#include <iostream>
#include <string>
using namespace std;

bool isVowel(char c) {
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

int main() 
{
    int T;
    cin >> T;

    while (T--) {
        string S;
        cin >> S;

        int count = 0;
        bool happy = false;

        for (char c : S) 
        {
            if (isVowel(c)) 
            {
                count++;
                if (count >= 3)
                 {
                    happy = true;
                    break;
                }
            } 
            else {
                count = 0;
            }
        }

        cout << (happy ? "HAPPY" : "SAD") << endl;
    }

    return 0;
}
