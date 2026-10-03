#include "../include/LowGravityTimeDilation.h"
#include <iostream>
#include <cmath>
#include <numbers>
using namespace std;

double LowGravityTimeDilation::TFAR(double TOE, double G, double M, double R, double V){
    double c = 3.0 * pow(10, 8);
    double TIS = TOE * (1.0 - (G * M) / (R * pow(c, 2))) - pow(V, 2)/(2*pow(c, 2)); 
    return TIS;
}
