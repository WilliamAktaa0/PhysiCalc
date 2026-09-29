#ifndef STARS_H
#define STARS_H
class Star {
private:
    double mass;
    double gravitationalConstant; 
    double radius;
    double surfaceTemp;
    double luminosity;
    
    std::string spectralType;
    std::string luminosityClass;
    std::string evolutionaryStage;
    
    double coreTemp;
    double corePressure;
    
    double hydrogenFraction;
    double heliumFraction;
    double metallicity;
    
    double fusionRate;
    double energyGenerationRate;
    double photosphereTemp;
    double coronaTemp;
    double stellarWindSpeeds;
    double massLossRate;
    double mainSequenceLifetime;
    std::string name;
    
public:

    Star(double m, double gc, double r, double suT, double lum,
         std::string spT, std::string lC, std::string eS, 
         double cT, double cP, double hyF, double heF, double met, 
         double fR, double eGR, double pT, double coT, double sWS, 
         double mLR, double mSL, std::string n);
    
             void Luminosity();
             void CorePressure();
             void coreTemp();
             void mainSequenceLifetime();
}