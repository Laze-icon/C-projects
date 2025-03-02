//C++ program demonstrating the concpt of inheritance by craeting a simple Bank Management System
//Eugen Mboya
//BSCIT-05-0003/2024
#include <iostream>
#include <string>
using namespace std;

class AccountHolder {
protected:
    string name;

public:
    AccountHolder(string n) : name(n) {}

    void setName(string n) {
        name = n;
    }

    string getName() const {
        return name;
    }
};

class BankAccount : public AccountHolder {
private:
    int accountNumber; 
    double balance;     

public:
    BankAccount(string n, int accNum, double bal)
        : AccountHolder(n), accountNumber(accNum), balance(bal) {}

    int getAccountNumber() const {
        return accountNumber;
    }

    double getBalance() const {
        return balance;
    }
};

class SavingsAccount : public BankAccount {
private:
    double interestRate;  

public:
    SavingsAccount(string n, int accNum, double bal, double rate)
        : BankAccount(n, accNum, bal), interestRate(rate) {}

    double getInterestRate() const {
        return interestRate;
    }
};

int main() {
    SavingsAccount s1("John Doe", 12345, 5000.75, 3.5);

    cout << "Account Holder Name: " << s1.getName() << endl;
    cout << "Account Number: " << s1.getAccountNumber() << endl;
    cout << "Account Balance: $" << s1.getBalance() << endl;
    cout << "Interest Rate: " << s1.getInterestRate() << "%" << endl;

    return 0;
}
