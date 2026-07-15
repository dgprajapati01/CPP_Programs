 #include <iostream>
#include <string>

using namespace std;

void solve() 
{
    string S, T;
    cin >> S >> T;
    
    string M = "";
    
    for (int i = 0; i < 5; i++) {
        if (S[i] == T[i]) {
            M += 'G';
        } else {
            M += 'B';
        }
    }
    cout << M;
}

int main() {
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}