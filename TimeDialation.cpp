#include <iostream>
#include <cmath>
using namespace std;

double timed(double v, double timeo){
    double c=pow(10,8)*3;
    double tis=timeo/sqrt(1-(pow(v,2)/pow(c,2)));
    return tis;
}

int main(){
    double velocity;
    double time;

    cout<<"Enter time spent in space : \n";
    cin>>time;

    cout<<"Enter velocity: \n";
    cin>>velocity; 

    double timeD=timed(velocity,time);
    cout<<"time on Earth: "<<timeD;

    return 0;
}
