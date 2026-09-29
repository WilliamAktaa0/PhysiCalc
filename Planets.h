#include <iostream>
#include <cmath>
#include <numbers> 
#include <string>

using namespace std;

class Planet {
private:
    double mass;
    double gravitationalconstant; 
    double radius;
    double temperature;
    string name;

public:
    Planet(double m, double gc, double r, double t, string n);

    double thermalpower();
    double vescape();
    double magneticfeild();
}