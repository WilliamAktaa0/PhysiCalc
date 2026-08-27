#include <iostream>
#include <cmath>
using namespace std;

double timed(double v, double tis){
    double c=pow(10,8)*3;
    double timeo=tis/sqrt(1.0-(pow(v,2)/pow(c,2)));
    return timeo;
}

int main(){
    double velocity;
    double time;
    double c=pow(10,8)*3;


    cout<<"Enter time spent in space : \n";
    cin>>time;

    cout<<"Enter velocity: \n";
    cin>>velocity; 

    if (velocity > c) {
    std::cerr << "Error: Velocity cannot exceed the speed of light"; std::endl;
    return 1; 
}
    else{

    double timeD=timed(velocity,time);
    cout<<"time on Earth: "<<timeD;

    return 0;
    }
}
