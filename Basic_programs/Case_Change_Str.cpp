#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string str;

    cout << "Enter a Lowercase String";
    getline(cin, str);

    
    for (int i=0; i<str.length(); i++) 
    {
        if (str[i] >= 'a' && str[i] <= 'z') 
        {
            str[i] = str[i] - 32;
        }
    }

    cout << "Uppercase String " << str << endl;

    return 0;
}
/*

g++ Case_Change_Str.cpp -o Casechange

D:\2. Dhyey Sem 2\CPP_Programs\Basic_programs>Casechange.exe
Enter a Lowercase String dhyey prajapati
Uppercase String  DHYEY PRAJAPATI

*/
