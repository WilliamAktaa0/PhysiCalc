#include <iostream>
#include <cmath>
#include <numbers> 
#include <string>

using namespace std;

class Planets {
private:
    double mass;
    double gravitationalconstant; 
    double radius;
    double temperature;
    string name;

public:
    Planet(double m, double gc, double r, double t, string n) {
        mass = m;
        gravitationalconstant = gc;
        radius = r;
        temperature = t;
        name = n;
    }

    double thermalpower() {
      double pi = M_PI;
        double stefanboltzman = 5.670374419e-8;
        double tpower = 4 * pi * radius * radius * stefanboltzman * pow(temperature, 4);
        return tpower;
    }

    double vescape() {
        if (radius <= 0) return 0; // Prevent division by zero
        double VESCAPE = sqrt((2 * gravitationalconstant * mass) / radius);
        return VESCAPE;
    }

    double magneticfeild(double md) {
      double pi = M_PI;
        double mu_0 = 4 * pi * 1e-7; 
        
        if (radius <= 0) return 0;
        double B = (mu_0 / (4 * pi)) * (md / pow(radius, 3));
        return B;
    }
};

int main() {
    double GC, M, R, T, MD;
    string N;

    cout << "Enter name of planet: ";
    cin >> N;

    cout << "Enter Magnetic Dipole of planet: ";
    cin >> MD;

    cout << "Enter gravitational constant (g): ";
    cin >> GC; 

    cout << "Enter mass of the planet (kg): ";
    cin >> M;

    cout << "Enter Radius of planet (m): ";
    cin >> R;

    cout << "Enter surface temperature of planet (Kelvin): ";
    cin >> T;

    Planet p1(M, GC, R, T, N);

    cout << "\n--- " << N << " Results ---" << endl;
    cout << "Thermal Power of Planet: " << p1.thermalpower() << " Watts" << endl;
    cout << "Velocity needed to escape gravity: " << p1.vescape() << " m/s" << endl;
    cout << "Magnetic Field at equator: " << p1.magneticfeild(MD) << " Tesla" << endl;

    return 0;
}
