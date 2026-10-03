#include "../include/LengthContraction.h"
#include <iostream>
#include <cmath>
#include <numbers>
using namespace std;

double LengthContraction::LC(double v, double Lo){
    double c = 3 * pow(10,8);
    double L = Lo * sqrt(1.0 - pow(v,2) / pow(c,2));
    return L;
}
