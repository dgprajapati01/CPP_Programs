#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool isPalindrome(string str)
 {
    string rev = str;
    reverse(rev.begin(), rev.end());
    return str == rev;
}

int main() 
{
    string s;
    cout << "Enter a string ";
    cin >> s;

    if (isPalindrome(s)) 
    {
        cout << s << " is a Palindrome" << endl;
    } 
    else
     {
        cout << s << " is not a Palindrome" << endl;
    }

    return 0;
}
/*
g++ Palindrome_str.cpp -o Palindromestr

D:\2. Dhyey Sem 2\CPP_Programs\Basic_programs>Palindromestr.exe
Enter a string PAPA
PAPA is not a Palindrome

*/