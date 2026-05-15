#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


int main()
 {
    string str = "DHYEY";

    reverse(str.begin(), str.end());
    
    cout << "Reversed String" << str << endl;
    return 0;
}
/*
g++ Reverse_Str.cpp -o Reversestr

D:\2. Dhyey Sem 2\CPP_Programs\Basic_programs>Reversestr.exe
Reversed String YEYHD
*/