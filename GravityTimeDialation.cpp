#include <iostream>
#include <cmath>
using namespace std;

double TFAR(double TIS, double G, double M, double R){
    double c=pow(10,8)*3;
    double TOE=TIS/sqrt(1.0-2*G*M/R*(/pow(c,2))); //TimeOnEarth / TimeOnSpace
    return TOE;
}

int main(){
    double tis;
    double g;
    double m;
    double r; //distance away from source of gravity
    double c=pow(10,8)*3;


    cout<<"Enter time spent in space : \n";
    cin>>tis;

    cout<<"Enter standard acceleration due to gravity: \n";
    cin>>velocity; 

    cout<<"Enter Distance away from source of gravity: \n";
    cin>>r;


    if (velocity > c) {
    std::cerr << "Error: Velocity cannot exceed the speed of light"; std::endl;
    return 1; 
}
    else{

    double timeD=TFAR(tis,g,m,r);
    cout<<"time on Earth: "<<timeD;

    return 0;
    }
}