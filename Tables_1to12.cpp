#include<iostream>

using namespace std;

int main()
{
    int multiplier, table;
    for(table=1; table<=12; table++){
    cout<<"Multiplication Table For"<<table<<":"<<endl;

    for(multiplier=1; multiplier<=12; multiplier++);{

        int product = table*multiplier;
        cout<< table<<"*"<<multiplier<<"="<<product<<endl;
    }
    cout<<endl<<endl;
    }
    return 0;
}
