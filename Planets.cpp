#include <iostream>
#include "../include/Planets.h"
#include <iostream>
#include <cmath>
#include <numbers>
using namespace std;

Planets::Planets(double m, double gc, double r, double t, string n) {
        mass = m;
        gravitationalconstant = gc;
        radius = r;
        temperature = t;
        name = n;
    }

    double Planets::thermalpower() {
      double pi = M_PI;
        double stefanboltzman = 5.670374419e-8;
        double tpower = 4 * pi * radius * radius * stefanboltzman * pow(temperature, 4);
        return tpower;
    }

    double Planets::vescape() {
        if (radius <= 0) return 0; // Prevent division by zero
        double VESCAPE = sqrt((2 * gravitationalconstant * mass) / radius);
        return VESCAPE;
    }

    double Planets::magneticfeild(double md) {
      double pi = M_PI;
        double mu_0 = 4 * pi * 1e-7; 
        
        if (radius <= 0) return 0;
        double B = (mu_0 / (4 * pi)) * (md / pow(radius, 3));
        return B;
    }