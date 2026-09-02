#include <iostream>
#include <cmath>
using namespace std;

double TFAR(double TOE, double G, double M, double R, double V){
    double c = 3.0 * pow(10, 8);
    double TIS = TOE * (1.0 - (G * M) / (R * pow(c, 2))) - pow(V, 2)/(2*pow(c, 2)); 
    return TIS;
}

int main(){
    double toe;
    double g; 
    double m; 
    double r;
    double c = 3.0 * pow(10, 8);
    double v;

    cout << "Enter time spent on Earth: ";
    cin >> toe;

    cout << "Enter gravitational constant: ";
    cin >> g; 

    cout << "Enter mass of the gravitational source: ";
    cin >> m;

    cout << "Enter distance away from source center: ";
    cin >> r;

    cout << "Enter velocity of spacecraft: ";
    cin >> v;

    if ((2.0 * g * m) / r >= pow(c, 2)) {
        std::cerr << "Error: The coordinates put you inside or at a black hole event horizon" << std::endl;
        return 1; 
    }

    double timeD = TFAR(toe, g, m, r, v);
    cout << "Time in space: " << timeD << " seconds" << std::endl;

    return 0;
}
