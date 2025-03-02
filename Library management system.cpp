//C++ program demonstrating the concept of OOP by creating a simple Library Management System
//Eugen Mboya
//BSCIT-05-0003/2024
#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;  

public:
    Person(string n) : name(n) {}

    void setName(string n) {
        name = n;
    }

    string getName() const {
        return name;
    }
};

class LibraryMember : public Person {
private:
    int memberID;        
    int booksBorrowed;  

public:
    LibraryMember(string n, int id, int books)
        : Person(n), memberID(id), booksBorrowed(books) {}

    int getMemberID() const {
        return memberID;
    }

    int getBooksBorrowed() const {
        return booksBorrowed;
    }
};

class PremiumMember : public LibraryMember {
private:
    double membershipFee;  

public:
    PremiumMember(string n, int id, int books, double fee)
        : LibraryMember(n, id, books), membershipFee(fee) {}

    double getMembershipFee() const {
        return membershipFee;
    }
};

int main() {
    PremiumMember p1("Alice Smith", 1001, 5, 50.75);

    cout << "Name: " << p1.getName() << endl;
    cout << "Member ID: " << p1.getMemberID() << endl;
    cout << "Books Borrowed: " << p1.getBooksBorrowed() << endl;
    cout << "Membership Fee: $" << p1.getMembershipFee() << endl;

    return 0;
}
