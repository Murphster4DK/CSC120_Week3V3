// Fig. 3.2: Account.h
// Account class that contains a name data member
// and member functions to set and get its value
#include <string> // enable program to use C++ string data type

class account {
public:
    // constructor initializes data member name with parameter accountName
    account(std::string accountName, int initialBalance)
        : name{accountName} {

        // validate that the initialBalance is greater then 0; if not
        // data member balance keeps its default initial value of 0
        if (initialBalance > 0) {
            balance = initialBalance; // assign it to data member balance
        }
    }

    // function taht depositis (adds) only a valid amount to the balance
    void deposit(int depositAmount) {
        if (depositAmount > 0) { // if the depositAmout is valid
            balance = balance + depositAmount; // add it to the balance
            }
    }

    // function return the account balance
    int getBalance() const {
        return balance;
    }

    // member function that sets the account name in the object
    void setName(std::string accountName) {
        name = accountName; // store the account name
    }

    // member function that retrieves the account name form the object
    std::string getName() const {
        return name; // return name's value to this function's caller
    }
private:
    std::string name; // adta member contining account holder's name
    int balance{0}; // data member with defult initial value
}; // end Class Account