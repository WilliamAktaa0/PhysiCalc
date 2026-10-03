#include "../include/Stars.h"
#include <iostream>
#include <cmath>
#include <numbers>
using namespace std;

Stars::Stars(double m, double gc, double r, double suT, double lum,
         std::string spT, std::string lC, std::string eS, 
         double cT, double cP, double hyF, double heF, double met, 
         double fR, double eGR, double pT, double coT, double sWS, 
         double mLR, double mSL, std::string n) 
    {
        mass = m;
        gravitationalConstant = gc;
        radius = r;
        surfaceTemp = suT;
        luminosity = lum;
        spectralType = spT;
        luminosityClass = lC;
        evolutionaryStage = eS;
        coreTemp = cT;
        corePressure = cP;
        hydrogenFraction = hyF;
        heliumFraction = heF;
        metallicity = met;
        fusionRate = fR;
        energyGenerationRate = eGR;
        photosphereTemp = pT;
        coronaTemp = coT;
        stellarWindSpeeds = sWS;
        massLossRate = mLR;
        mainSequenceLifetime = mSL;
        name = n;
    }
    void Stars::Luminosity() {
        double pi = M_PI;
        double stefanboltzman = 5.670374419e-8;
        luminosity = 4 * pi * radius * radius * stefanboltzman * pow(coreTemp, 4);
    }
    void Stars::CorePressure() {
        double pi = M_PI;
        corePressure=3*gravitationalConstant*pow(mass,2)/8*pi*pow(radius,4);
    }
    void Stars::coreTemp(double u){
        coreTemp=gravitationalConstant*mass*u*1.67*pow(10,-27);
    }
    void Stars::mainSequenceLifetime(doube mo){
        mainSequenceLifetimze=pow(10,10)*pow((mass/mo),-2.5);
    }