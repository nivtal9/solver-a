//
// Created by nivtal9 & AVI on 27.4.2020.
//

#include "solver.hpp"
#include <cmath>
#include <langinfo.h>
#include "math.h"

solver::RealVariable &solver::operator*(double DV1, solver::RealVariable &RV2) {
    RealVariable &x=  *new RealVariable(DV1*RV2.a , DV1*RV2.b, DV1*RV2.c);
    return x;

}

solver::RealVariable &solver::operator*(solver::RealVariable &RV1, double DV2) {
    RealVariable &x=  *new RealVariable(DV2*RV1.a, DV2*RV1.b,  DV2*RV1.c);
    return x;
}

solver::RealVariable &solver::operator+(solver::RealVariable &RV1, solver::RealVariable &RV2) {
    RealVariable &x= *new RealVariable(RV1.a + RV2.a, RV1.b + RV2.b, RV1.c + RV2.c);
    return x;

}

solver::RealVariable &solver::operator+(double DV1, solver::RealVariable &RV2) {
    RealVariable &x= *new RealVariable(DV1+RV2.a,  RV2.b,  RV2.c);
    return x;
}

solver::RealVariable &solver::operator+(solver::RealVariable &RV1, double DV2) {
    RealVariable &x= *new RealVariable(DV2+RV1.a,  RV1.b,  RV1.c);
    return x;
}

solver::RealVariable &solver::operator/(double DV1, solver::RealVariable &RV2) {

    RealVariable &x= *new RealVariable(DV1/RV2.a,  DV1/RV2.b,  DV1/RV2.c);
    return x;
}

solver::RealVariable &solver::operator/(solver::RealVariable &RV1, double DV2) {
  if(DV2==0){
      throw std::runtime_error("cant divide by 0");
  }
    RealVariable &x= *new RealVariable(RV1.a/DV2,  RV1.b/DV2, RV1.c/DV2);
    return x;
}

solver::RealVariable &solver::operator==(solver::RealVariable &RV1, solver::RealVariable &RV2) {
    RealVariable &x1= *new RealVariable(RV1.a-RV2.a, RV1.b-RV2.b,  RV1.c-RV2.c);
    return x1;
}


solver::RealVariable &solver::operator==(double DV1, solver::RealVariable &RV2) {
    RealVariable &x1= *new RealVariable(RV2.a-DV1, RV2.b,  RV2.c);
    return x1;
}

solver::RealVariable &solver::operator==(solver::RealVariable &RV1, double DV2) {
    RealVariable &x1= *new RealVariable(RV1.a-DV2, RV1.b,  RV1.c);
    return x1;
}

solver::RealVariable &solver::operator^(solver::RealVariable &RV1, double DV2) {
    if(DV2>2){
        throw std::runtime_error("power can't be biger then 2");
    }
    if(DV2==1){
        return RV1;
    }
    if(DV2==0){
        RV1.a=1;
        RV1.a=0;
        RV1.a=0;
        return RV1;
    }
    RealVariable& RV3=*new RealVariable(RV1.a,RV1.b,RV1.c);


    for (int i = 0; i < DV2; ++i) {
        RV3.a= RV3.a*RV1.a;

    }
    if(RV3.b>0){
        RV3.c=RV3.b;
        RV3.b=0;
    }
    return RV3;
}

solver::RealVariable &solver::operator-(solver::RealVariable &RV1, solver::RealVariable &RV2) {
    RealVariable &x= *new RealVariable(RV1.a-RV2.a,  RV1.b-RV2.b, RV1.c-RV2.c);
    return x;

}

solver::RealVariable &solver::operator-(double DV1, solver::RealVariable &RV2) {
    RealVariable &x= *new RealVariable(DV1-RV2.a,  RV2.b, RV2.c);
    return x;
}

solver::RealVariable &solver::operator-(solver::RealVariable &RV1, double DV2) {
    RealVariable &x= *new RealVariable(RV1.a-DV2,  RV1.b, RV1.c);
    return x;
}




////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////





solver::ComplexVariable &solver::operator*(solver::ComplexVariable &CV1, solver::ComplexVariable &CV2) {
    ComplexVariable &x=*new ComplexVariable(CV1.real*CV2.real , CV1.imag*CV2.imag ,CV1.pow_2*CV2.pow_2);
    return x;
}
solver::ComplexVariable &solver::operator*(double DV1, solver::ComplexVariable &CV2) {
    ComplexVariable &x=*new ComplexVariable(DV1*CV2.real , DV1*CV2.imag, DV1*CV2.pow_2);
    return x;
}

solver::ComplexVariable &solver::operator*(solver::ComplexVariable &CV1, double DV2) {
    ComplexVariable &x=*new ComplexVariable(DV2*CV1.real , DV2*CV1.imag,DV2*CV1.pow_2);
return x;
}

solver::ComplexVariable &solver::operator/(solver::ComplexVariable &CV1, double DV2) {
    if(DV2==0) {
        throw std::runtime_error("divided by zero");
    }
    else{
        ComplexVariable &x = *new ComplexVariable(CV1.real / DV2, CV1.imag / DV2 , CV1.pow_2/DV2);
        return x;
    }
}


solver::ComplexVariable &solver::operator==(solver::ComplexVariable &CV1, solver::ComplexVariable &CV2) {
     ComplexVariable &x = *new ComplexVariable(CV1.real - CV2.real, CV1.imag - CV2.imag, CV1.pow_2 - CV2.pow_2);
    return x;
}

solver::ComplexVariable &solver::operator==(double DV1, solver::ComplexVariable &CV2) {
    ComplexVariable &x = *new ComplexVariable(DV1 - CV2.real,  CV2.imag, CV2.pow_2);
    return x;
}

solver::ComplexVariable &solver::operator==(solver::ComplexVariable &CV1, double DV2) {
     ComplexVariable &x = *new ComplexVariable(CV1.real - DV2, CV1.imag ,CV1.pow_2);
    return x;
}

solver::ComplexVariable &solver::operator^(solver::ComplexVariable &CV1, double DV2) {
    if(DV2>2){
        throw std::runtime_error("power can't be biger then 2");
    }
    else if(DV2==0){
        ComplexVariable &x = *new ComplexVariable(1,0,0);
        return x;
    }
    else if(DV2==1){
        ComplexVariable &x = *new ComplexVariable(CV1.real,CV1.imag,CV1.pow_2);
        return x;
    }

    ComplexVariable &x = *new ComplexVariable(CV1.real*CV1.real,0,CV1.pow_2+1);
    return x;

}

solver::ComplexVariable &solver::operator-(solver::ComplexVariable &CV1, solver::ComplexVariable &CV2) {
    ComplexVariable &x = *new ComplexVariable(CV1.real-CV2.real,  CV1.imag- CV2.imag, CV1.pow_2- CV2.pow_2);
    return x;
}

solver::ComplexVariable &solver::operator-(double DV1, solver::ComplexVariable &CV2) {
    ComplexVariable &x = *new ComplexVariable(DV1-CV2.real,  CV2.imag, CV2.pow_2);
    return x;
}

solver::ComplexVariable &solver::operator-(solver::ComplexVariable &CV1, double DV2) {
    ComplexVariable &x = *new ComplexVariable(CV1.real-DV2,  CV1.imag, CV1.pow_2);
    return x;
}

solver::ComplexVariable &solver::operator-(std::complex<double> CDV1, solver::ComplexVariable &CV2) {
    ComplexVariable &x = *new ComplexVariable(CDV1 -CV2.real,  CV2.imag,CV2.pow_2);
    return x;
}

solver::ComplexVariable &solver::operator-(solver::ComplexVariable &CV1, std::complex<double> CDV2) {
    ComplexVariable &x = *new ComplexVariable(CV1.real-CDV2,  CV1.imag,CV1.pow_2);
    return x;
}

solver::ComplexVariable &solver::operator+(solver::ComplexVariable &CV1, solver::ComplexVariable &CV2) {
    ComplexVariable &x = *new ComplexVariable(CV1.real+CV2.real,  CV1.imag+ CV2.imag,CV1.pow_2+ CV2.pow_2);
    return x;
}


solver::ComplexVariable &solver::operator+(double DV1, solver::ComplexVariable &CV2) {
    ComplexVariable &x = *new ComplexVariable(CV2.real+DV1,  CV2.imag, CV2.pow_2);
    return x;
}

solver::ComplexVariable &solver::operator+(solver::ComplexVariable &CV1, double DV2) {
    ComplexVariable &x = *new ComplexVariable(CV1.real+DV2,  CV1.imag, CV1.pow_2);
    return x;
    
}

solver::ComplexVariable &solver::operator+(std::complex<double> CDV1, solver::ComplexVariable &CV2) {
    ComplexVariable &x = *new ComplexVariable(CDV1+CV2.real,  CV2.imag,CV2.pow_2);
    return x;
}

solver::ComplexVariable &solver::operator+(solver::ComplexVariable &CV1, std::complex<double> CDV2) {
    ComplexVariable &x = *new ComplexVariable(CDV2+CV1.real,  CV1.imag, CV1.pow_2);
    return x;
}


double solver::solve(solver::RealVariable &RV) {
    double a = RV.get_a();
    double b = RV.get_b();
    double c=RV.get_c();
    double results =0;
    if(a*b!=0 && c==0){
        results = (a/b)*(-1);
        return results;
    }
    if(a==0 && b!=0 && c==0){
        return 0;
    }
    if(a==0 && b==0 && c!=0){
        return 0;
    }
    if(a*c!=0){
        if(pow(b,2)-4*a*c<0){
            throw std::invalid_argument(" There is no real solution");
        }
        if(a!=0 && b==0 && c!=0){
            a=-a/c;
            a=sqrt(a);
            c=sqrt(c);
            return results=a;
        }
        results = (-b+(sqrt(pow(b,2)-4*a*c)))/2*c;
        return results;
    }
    if(a==0 && b!=0 && c!=0){
        return 0;
    }
    throw std::invalid_argument(" There is no real solution");
}

std::complex<double> solver::solve(solver::ComplexVariable &CV1){
    std:: complex<double> x1=0;    float realPart=0;    float imaginaryPart =0;

    if(CV1.get_pow()==0){
        if (CV1.get_imag()==0 )
            throw std::invalid_argument("Roots are complex and different.\n");

        std::complex<double> res = ((CV1.get_real()))/CV1.get_imag();
        res *=-1;
        return res;
    }

    std::complex<double> discriminant = CV1.get_imag() * CV1.get_imag() - 4 * CV1.get_pow() * CV1.get_real();

    if (discriminant.real() > 0) {
        sqrt(discriminant);
        x1 = (-CV1.get_imag() + sqrt(discriminant)) / (2*CV1.get_pow());
        return x1;
    }

    else {
        std::complex<double> s =std::complex<double>(-1) * CV1.get_imag();
        return s + sqrt(discriminant)/(CV1.get_pow()*2);
    }

}