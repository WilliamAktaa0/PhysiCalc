#include "../include/OrbitTime.h"
#include <iostream>
#include <cmath>
#include <numbers>
using namespace std;

double OrbitTime::otime(double R, double M){
    double pi = M_PI;    
    double G = 6.67430 * pow(10,-11);
    double OTime = 2*pi*sqrt((pow(R,3))/(G*M));
    return OTime;
}

double OrbitTime::TFAR(double TOE, double G, double M, double R, double V){
    double c = 3.0 * pow(10, 8);
    double TIS = TOE * (1.0 - (G * M) / (R * pow(c, 2))) - pow(V, 2)/(2*pow(c, 2)); 
    return TIS;
}