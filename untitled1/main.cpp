// Fig. 3.5: AccountTest.cpp
// using the Account constructor to initialize the name data
#include <iostream>
#include "Account.h"

using namespace std;

int main()
{
    account account1{"Jane Green", 50};
    account account2{"Jhon Blue", -7};

    // display initial value of name for each Account
    cout << "account1 name is: " << account1.getName() << " balance is $"
         << account1.getBalance();
    cout << "account2 name is: " << account2.getName() << " balance is $"
         << account2.getBalance();

    cout << "\n\nenter deposit amount for accout1: "; // prompt
    int depositAmount;
    cin >> depositAmount; // obtain user input
    cout << "adding " << depositAmount << " to account1 balance";
    account1.deposit(depositAmount); // add to account1's balance

    // display balances
    cout << "\n\naccount1: " << account1.getName() << " balance is $"
         << account1.getBalance();
    cout << "\naccount2: " << account2.getName() << " balance is $"
         << account2.getBalance();

    cout << "\n\nEnter deposit amount for account2: "; // prompt
    cin >> depositAmount; // obtain user input
    cout << "adding " << depositAmount << " to account2 balance";
    account2.deposit(depositAmount); // add to account2 balance

    // display ballances
    cout << "\n\naccount1: " << account1.getName() << " balance is $"
         << account1.getBalance();
    cout << "\naccount2: " << account2.getName() << " balance is $"
         << account2.getBalance() << endl;
}