//Eugen Mboya
//BSCIT-05-0003/2024
//C++ program to calculate the daysoverdue for library books

#include <io stream>;
using namespace std;

int main () {
    int daysoverdue;
    double fine = 0.0

    cout <<"Enter the number of days the book is overdue";
    cin >>daysoverdue;

    if (daysoverdue <=7) {
        fine = daysoverdue * 20;
    }    
    else if (daysoverdue >=8 && daysoverdue <=14) {
        fine = daysoverdue * 50;
    }    
    else if (daysoverdue >=15) {
        fine = daysoverdue * 100;
    }       
    cout <<"The total fine is: ksh" <<fine <<endl;

    return 0;
}
