#include <iostream>
#include <cmath>
using namespace std;

double KE(double v,double m){
    double c=pow(10,8)*3;
    double KE=1/sqrt(1-pow(v,2)/pow(c,2))*m*pow(c,2);
    return KE;
}

int main(){
    double vel;
    double mass;
    double ke;
    cout<<"Enter mass: \n";
    cin>>mass;
    cout<<"Enter velocity: \n";
    cin>>vel;
    ke=KE(vel,mass);
    cout<<ke;


    return 0;
}