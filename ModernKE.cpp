#include "../include/ModernKE.h"
#include <iostream>
#include <cmath>
#include <numbers>
using namespace std;

double ModernKE::KE(double v, double m){
    double c = 3.0 * pow(10,8);
    double gamma = 1.0 / sqrt(1.0 - pow(v,2) / pow(c,2));
    double kinetic_energy = (gamma - 1.0) * m * pow(c,2);
    return kinetic_energy;
}
