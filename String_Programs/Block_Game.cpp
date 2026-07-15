#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void solve() {
    string n;
    cin >> n;
    
    string rev = n;
    reverse(rev.begin(), rev.end());
    
    if (n == rev) 
    {
        cout << "wins\n";
    } else {
        cout << "loses\n";
    }
}

int main() {
    
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}