#include <iostream>
#include <cmath>
using namespace std;

double LC(double v, double Lo){
    double c = 3 * pow(10,8);
    double L = Lo * sqrt(1.0 - pow(v,2) / pow(c,2));
    return L;
}

int main(){
    double velocity;
    double Lo;
    double c = 3 * pow(10,8);

    cout << "Enter Length of object at rest: \n";
    cin >> Lo;

    cout << "Enter velocity: \n";
    cin >> velocity; 
    
    if (velocity >= c) {
        std::cerr << "Error: Velocity cannot meet or exceed the speed of light!" << std::endl;
        return 1; 
    }
    else {
        double l = LC(velocity, Lo);
        cout << "Length of moving object to person standing still: " << l << std::endl;
        return 0;
    }
}
