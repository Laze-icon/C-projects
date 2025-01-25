//Eugen Mboya
//BSCIT-05-0003/2024
//C++ program to calculate volume of a cylinder

#include <io stream>
#include <c math> //for M_PI
using namespace std;

double calculatecylindervolume (double radius, double height) {
    return M_PI*radius*radius*height;
}
int main () {
    double radius, height

    cout <<"Enter radius of cylinder:";
    cin >> Radius;
    cout <<"Enter height of cylinder:";
    cin >> Height;

    double volume = calculatecylindervolume (radius, height);
    cout  <<"Volume of the cylinder is:" <<volume <<endl;

    return 0;
}