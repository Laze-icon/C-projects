//C++ program about class and objects
//Eugen Mboya
//BSCIT-05-0003/2024
#include <iostream>
#include <string>

using namespace std;

class Car {
public:
    string brand;
    string model;
    float price;
    int mileage;

    Car(string b, string m, float p, int mi) {
        brand = b;
        model = m;
        price = p;
        mileage = mi;
    }

    void display() {
        cout << "Car Brand: " << brand << endl;
        cout << "Car Model: " << model << endl;
        cout << "Price: $" << price << endl;
        cout << "Mileage: " << mileage << " miles" << endl;
    }

    void drive(int distance) {
        mileage += distance; 
        cout << "New Mileage after driving " << distance << " miles: " << mileage << " miles" << endl;
    }
};

int main() {
    Car myCar("Toyota", "Corolla", 20000.0, 5000);

    cout << "Initial Car Details:" << endl;
    myCar.display();

    // Simulate driving the car for 150 miles and display the updated mileage
    cout << "\nSimulating driving for 150 miles..." << endl;
    myCar.drive(150); 

    // Simulate driving the car for 300 miles and display the updated mileage
    cout << "\nSimulating driving for 300 miles..." << endl;
    myCar.drive(300);

    return 0;
}