#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() 
{
    int T, N;
    cin >> T >> N;

    while (T--) 
    {

        string S;
        cin >> S;

        vector<int> freq(26, 0);
        
        bool possible = false;

        for (char c : S) {
            freq[c - 'a']++;
            if (freq[c - 'a'] >= 2)
                possible = true;
        }

        if (possible)
            cout << N - 2 << endl;
        else
            cout << -1 << endl;
    }

    return 0;
}