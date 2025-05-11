#include "QuadraticFactorize.hpp"

std::string QuadraticFactorize::formatComplex(const std::complex<double>& z, bool isSecond )
{
    std::ostringstream oss;
    double real = z.real();
    double imag= z.imag();

    if(isApproxZero(real) && isApproxZero(imag))
        return "x";
    
    if(!isApproxZero(imag))
    {
        if(isApproxInt(real) && isApproxInt(imag)){

            int realInt = static_cast<int>(std::round(real));
            int imagInt = static_cast<int>(std::round(imag));

            if (isSecond) {
                oss << "(x";
                if (realInt != 0) {
                    oss << (realInt > 0 ? "+" : "") << realInt;
                }
                oss << (imagInt > 0 ? "-" : "+") << std::abs(imagInt) << "i)";
            } else {
                oss << "(x";
                if (realInt != 0) {
                    oss << (realInt > 0 ? "+" : "") << realInt;
                }
                oss << (imagInt > 0 ? "+" : "-") << std::abs(imagInt) << "i)";
            }

        }else{
            if(isSecond){
                if(!isApproxZero(real)){
                    oss << "(x";
                    oss << (real > 0 ? "+" : "") << real ;
                }
                oss << (imag > 0 ? "-" : "+") << std::abs(imag) << "i)";
            }
            else{
                oss << "(x";
                if(!isApproxZero(real)){
                    
                    oss << (real > 0 ? "+" : "") << real ;
                }
                oss << (imag > 0 ? "+" : "-") << std::abs(imag) << "i)";
            }

        }

    }else{

        if (isApproxInt(real)) {
            int realInt = static_cast<int>(std::round(real));
            oss << "(x" << (realInt > 0 ? "+" : "") << realInt << ")";
        } else {
            oss << "(x" << (real > 0 ? "+" : "") << real << ")";
        }
    
    }
    return oss.str();

}
std::string QuadraticFactorize::formatFirstTerm()
{
    if(isApproxZero(a-1.0)){
        return "";
    }else if(isApproxInt(a)){
        return std::to_string(static_cast<int>(std::round(a)));
    }else{
        std::ostringstream oss;
        oss << a;
        return oss.str();
    }
    
}
std::string QuadraticFactorize::getFactorize()
{
    std::ostringstream oss;
    std::string prefix = formatFirstTerm();
    if(!prefix.empty())
        oss << prefix;
    
    std::complex<double> nz1 = -z1;
    std::complex<double> nz2 = -z2;

    oss << formatComplex(nz1) << formatComplex(nz2,true);
    return oss.str();
}
void QuadraticFactorize::calculateRoots()
{
    if(isApproxZero(a))
        throw std::invalid_argument("Coefficient of a cannot be zero");
    
    double discriminant = (b * b) - 4.0 * a * c;

    if(discriminant >= 0){
        double sqrtDisc = std::sqrt(discriminant);
        z1 = std::complex<double>(-b + sqrtDisc,0) /(2*a) ;
        
        z2 = std::complex<double>(-b - sqrtDisc,0) / (2.0*a);
        std::cout << z1 << std::endl;
        std::cout << z2 << std::endl; 
    }else{
        double sqrtDisc = std::sqrt(-discriminant);
        z1 = std::complex<double>(-b,sqrtDisc) / (2.0*a);
        z2 = std::complex<double>(-b,-sqrtDisc) / (2.0*a);
    }
}
void QuadraticFactorize::printFactorizeFormat()
{
    std::cout << getFactorize() << std::endl;
}

std::complex<double> QuadraticFactorize::getFirstRoot(){
    return z1;
}
std::complex<double> QuadraticFactorize::getSecondRoot(){
    return z2;
}