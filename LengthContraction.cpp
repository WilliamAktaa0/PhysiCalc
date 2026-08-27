#include <iostream>
#include <cmath>
using namespace std;

double LC(double v, double Lo){
    double c = pow(10,8)*3;
    double L=Lo*sqrt(1.0-pow(v,2)/pow(c,2));
    return L;
}


int main(){
    double velocity;
    double Lo;
    double c=pow(10,8)*3;

    cout<<"Enter Length of object at rest: \n";
    cin>>Lo;

    cout<<"Enter velocity: \n";
    cin>>velocity; 
    
     if (velocity > c) {
    std::cerr << "Error: Velocity cannot exceed the speed of light"; std::endl;
    return 1; 
}
    else{

    double l=LC(velocity,Lo);
    cout<<"Length of moving object to person standing still: \n"<<l;
    return 0;
    }

}
