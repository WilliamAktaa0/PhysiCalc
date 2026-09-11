#include <iostream>
#include <cmath>
#include <numbers>
using namespace std;

class Planet{
    private:
        double mass;
        double gravitationalconstant;
        double orbitvelocity;
        double orbitperiod;
        double temperature;
        double atmosphericpressure;
        double radius;
        int numberofmoons;
        string name;
    public:
        Planet(double m, double gc, double ov, double op, double t, double ap, double r, int moon, string n){
            mass=m;
            gravitationalconstant=gc;
            orbitvelocity=ov;
            orbitperiod=op;
            temperature=t;
            atmosphericpressure=ap;
            numberofmoons=moon;
            radius=r;
            name=n;
        }
    double thermalpower(){
        double pi = M_PI;
        double stefanboltzman=5.670374419*pow(10,-8);
        double tpower=4*pi*radius*radius*stefanboltzman*pow(temperature,4);
        return tpower;
    }
    double vescape(){
        double pi = M_PI;
        double VESCAPE = pi*(2*gravitationalconstant*mass)/2;
        return VESCAPE;
    }
    double magneticfeild(double md){
        double pi = M_PI;
        double n = 4*pi*10e-7;
        double B = (n/(4*pi)) * md/pow(radius,3);
        return B;
    }
};

int main(){
    double GC; 
    double M; 
    double R;
    double V;
    double OV;
    double OP;
    double AP;
    double T;
    double MD;
    int MOON;
    string N;

    cout << "Enter name of planet: ";
    cin >> N;

    cout<<"Enter Magnetic Dipole of planet: ";
    cin >> MD;

    cout << "Enter gravitational constant of planet: ";
    cin >> GC; 

    cout << "Enter mass of the planet: ";
    cin >> M;

    cout << "Enter Radius of planet: ";
    cin >> R;

    cout << "Enter orbit velocity of planet: ";
    cin >> OV;

    cout << "Enter orbit period of planet: ";
    cin >> OP;

    cout << "Enter atmospheric pressure of planet: ";
    cin >> AP;

    cout << "Enter temperature of planet: ";
    cin >> T;

    cout << "Enter # of moons: ";
    cin >> MOON;




    Planet p1(M, GC, OV, OP, T, AP, R, MOON, N);
    double Tpower=p1.thermalpower();
    cout<<"Thermal Power of Planet: " << Tpower;

    double vESCAPE=p1.vescape();
    cout<<"velocity needed to escape Planet's gravitational feild: " << vESCAPE;

    double MagneticFeild=p1.magneticfeild(MD);
    cout<<"Magnetic Feild of planet: : " << MagneticFeild;



}