#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
private:

    string accountHolder;
    int accountNumber;
    double balance;

public:
    
    BankAccount(string name, int accNo, double initialBalance)
    {
        accountHolder = name;
        accountNumber = accNo;
        balance = initialBalance;
    }

    void deposit(double amount)
    {
        balance += amount;
        cout << "Deposited Amount " << amount << endl;
        cout << "Updated Balance " << balance << endl;
    }

    
    void withdraw(double amount)
    {
        if (amount <= balance)
        {
            balance -= amount;
            cout << "Withdrawn Amount" << amount << endl;
            cout << "Remaining Balance" << balance << endl;
        }

        else
        {
            cout << "Insufficient Balance ! " << endl;
        }
    }

    void display()
    {
        cout << "\n Account Holder: " << accountHolder << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main()
{
    
    BankAccount acc("Dhyey", 1001, 10000);

    acc.display();

    acc.deposit(3000);
    
    acc.withdraw(500);

    acc.display();

    return 0;
}

/*>g++ Bank_Account.cpp -o Bankacc

D:\2. Dhyey Sem 2\CPP_Programs\Basic_programs>Bankacc

 Account Holder: Dhyey
Account Number: 1001
Balance: 10000
Deposited Amount 3000
Updated Balance 13000
Withdrawn Amount500
Remaining Balance12500

 Account Holder: Dhyey
Account Number: 1001
Balance: 12500
*/