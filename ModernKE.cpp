#include <iostream>
#include <cmath>
using namespace std;

double KE(double v, double m){
    double c = 3.0 * pow(10,8);
    double gamma = 1.0 / sqrt(1.0 - pow(v,2) / pow(c,2));
    double kinetic_energy = (gamma - 1.0) * m * pow(c,2);
    return kinetic_energy;
}

int main(){
    double vel;
    double mass;
    double ke;
    double c = 3.0 * pow(10,8);

    cout << "Enter mass (kg): \n";
    cin >> mass;
    cout << "Enter velocity (m/s): \n";
    cin >> vel;

    if (vel >= c) {
        cerr << "Error: Velocity cannot meet or exceed the speed of light!" << endl;
        return 1;
    }
    if (vel < 0 || mass < 0) {
        cerr << "Error: Mass and velocity must be positive values!" << endl;
        return 1;
    }

    ke = KE(vel, mass);
    cout << "Relativistic Kinetic Energy: " << ke << " Joules" << endl;

    return 0;
}
