#include <iostream>
#include <string>
using namespace std;

bool isVowel(char c) {
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        string S;
        cin >> S;

        int cnt = 0;
        bool easy = true;

        for (char c : S) 
        {
            if (isVowel(c)) 
            {
                cnt = 0;
            }
             else {
                cnt++;
                if (cnt >= 4) {
                    easy = false;
                    break;
                }
            }
        }

        if (easy)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}