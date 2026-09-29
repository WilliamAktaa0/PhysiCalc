#include <iostream>
#include <cmath>
#include <numbers>
using namespace std;

double otime(double R, double M){
    double pi = M_PI;    
    double G = 6.67430 * pow(10,-11);
    double OTime = 2*pi*sqrt((pow(R,3))/(G*M));
    return OTime;
}

double TFAR(double TOE, double G, double M, double R, double V){
    double c = 3.0 * pow(10, 8);
    double TIS = TOE * (1.0 - (G * M) / (R * pow(c, 2))) - pow(V, 2)/(2*pow(c, 2)); 
    return TIS;
}

int main(){
    double r;
    double m;
    double v;
    double g;
    int me;
    int ge;

    cout << "Enter distance from gravitational source : ";
    cin >> r;

    cout << "Consider X the exponent of 10 used to multiply the mass of the center of the gravitation feild with, Enter x: ";
    cin >> me;

    cout << "Enter mass of the center of the gravitational feild: ";
    cin >> m; 

    cout << "Enter gravitational constant: ";
    cin >> g; 

    cout << "Consider X the exponent of 10 used to multiply the gravitational constant of the center of the orbiting object with, Enter x: ";
    cin >> ge;
    g*=pow(10,ge);

    cout << "Enter velocity of orbiting mass: ";
    cin >> v;

    m*=pow(10,me); 

        double OTIME = otime(r, m);
        OTIME/=(60*60*24);
        cout << "Orbit Time: " << OTIME << std::endl;
        OTIME=TFAR(OTIME,g, m, r, v);
        cout << "After considering gravity, velocity, and time delatation, time on orbiting mass is " << OTIME;

        return 0;
}