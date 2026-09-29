VelocityTimeDilation::VelocityTimeDilation(){}
double VelocityTimeDilation::timed(double v, double tis){
    double c = 3 * pow(10,8);
    double timeo = tis / sqrt(1.0 - (pow(v,2) / pow(c,2)));
    return timeo;
}
