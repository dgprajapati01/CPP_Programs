#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string str;
    int count = 0;

    cout << "Enter a string: ";
    getline(cin, str);

    for (int i = 0; i < str.length(); i++) 
    {
        char ch = tolower(str[i]);

        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') 
        {
            count++;
        }
    }

    cout << "Number of vowels = " << count << endl;

    return 0;
}
/*

g++ Vowels_str.cpp -o Vowels

D:\2. Dhyey Sem 2\CPP_Programs\Basic_programs>Vowels.exe
Enter a string: Dhyey Prajapati
Number of vowels = 5

*/