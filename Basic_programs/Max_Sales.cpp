#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;

    int chef = A * C;
    int chefina = B * C;

    if (chef > chefina)
        cout << chef << endl;
    else
        cout << chefina << endl;

    return 0;
}