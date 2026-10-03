#include "../include/GravityTimeDilation.h"
#include <iostream>
#include <cmath>
#include <numbers>
using namespace std;

double GravityTimeDilation::TFAR(double TIS, double G, double M, double R){
    double c = 3.0 * pow(10, 8);
    double TOE = TIS * sqrt(1.0 - (2.0 * G * M) / (R * pow(c, 2))); 
    return TOE;
}