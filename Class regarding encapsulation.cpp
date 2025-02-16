//C++ program for class regarding encapsulation
//Eugen Mboya
//BSCIT-05-0003/2024
class BankAccount {
private:
    string accountHolder;
    double balance;

public:
    BankAccount(string holder, double initialBalance) {
        accountHolder = holder;
        balance = initialBalance;
    }

    string getAccountHolder() const {
        return accountHolder;
    }

    void setAccountHolder(const string& holder) {
        accountHolder = holder;
    }

    double getBalance() const {
        return balance;
    }

    void setBalance(double newBalance) {
        if (newBalance >= 0) {  
            balance = newBalance;
        } else {
            cout << "Error: Balance cannot be negative." << endl;
        }
    }
};