#include <iostream>
#include <cmath>
#include <sstream>
#include <iomanip>
#include <complex>

class QuadraticFactorize
{

private:
    double a, b, c;
    std::complex<double> z1,z2;
    const double EPSILON = 1e-10;

    bool isApproxZero(double value){
        return std::abs(value) < EPSILON;
    }

    bool isApproxInt(double value){
        return isApproxZero(value - (std::round(value)));
    }

    std::string formatComplex(const std::complex<double>& z, bool isSecond = false);
    std::string formatFirstTerm();
    std::string getFactorize();

public:
QuadraticFactorize(double a_val,double b_val,double c_val) : a(a_val), b(b_val) ,c(c_val){
    calculateRoots();
}

void calculateRoots();
void printFactorizeFormat();
std::complex<double> getFirstRoot();
std::complex<double> getSecondRoot();
};
