#include <iostream>
#include <cmath>
using namespace std;

double TFAR(double TIS, double G, double M, double R){
    double c = 3.0 * pow(10, 8);
    double TOE = TIS * sqrt(1.0 - (2.0 * G * M) / (R * pow(c, 2))); 
    return TOE;
}

int main(){
    double tis;
    double g; 
    double m; 
    double r;
    double c = 3.0 * pow(10, 8);

    cout << "Enter time spent in space: ";
    cin >> tis;

    cout << "Enter gravitational constant: ";
    cin >> g; 

    cout << "Enter mass of the gravitational source: ";
    cin >> m;

    cout << "Enter distance away from source center: ";
    cin >> r;

    if ((2.0 * g * m) / r >= pow(c, 2)) {
        std::cerr << "Error: The coordinates put you inside or at a black hole event horizon" << std::endl;
        return 1; 
    }

    double timeD = TFAR(tis, g, m, r);
    cout << "Time elapsed on Earth: " << timeD << " seconds" << std::endl;

    return 0;
}
