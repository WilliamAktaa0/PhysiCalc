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

int main(){
    double r;
    double m;

    cout << "Enter distance from gravitational source : ";
    cin >> r;

    cout << "Enter mass: ";
    cin >> m; 
    m*=pow(10,24);

        double OTIME = otime(r, m);
        cout << "Orbit Time: " << OTIME << std::endl;
        return 0;
}