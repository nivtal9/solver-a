//
// Created by nivtal9 & AVI on 27.4.2020.
//

#include "solver.hpp"
#include <cmath>
#include <langinfo.h>

solver::RealVariable solver::operator*(solver::RealVariable &RV1, solver::RealVariable &RV2) {
   // RV1.a =RV1.a*RV2.a;
   // RV1.b =RV1.b*RV2.b;
   // RV1.c=RV1.c+RV2.c;
   // return RV1;
    RealVariable& x=  *new RealVariable(RV1.a * RV2.a, RV1.b * RV2.b, RV1.c + RV2.c);
    return x;//wrong
   // (2+3x^2)+2x
}

solver::RealVariable &solver::operator*(double DV1, solver::RealVariable &RV2) {
    RealVariable &x=  *new RealVariable(DV1*RV2.a, DV1*RV2.b, DV1*RV2.c);
   // RV2.a=DV1*RV2.a;
  //  RV2.b=DV1*RV2.b;
  //  RV2.c=DV1*RV2.c;
    return x;

}

solver::RealVariable &solver::operator*(solver::RealVariable &RV1, double DV2) {
  //  RV1.a=DV2*RV1.a;
   // RV1.b=DV2*RV1.b;
   // RV1.c=DV2*RV1.c;
    RealVariable &x=  *new RealVariable(DV2*RV1.a, DV2*RV1.b,  DV2*RV1.c);
    return x;
}

solver::RealVariable &solver::operator+(solver::RealVariable &RV1, solver::RealVariable &RV2) {

  //  RV1.b= RV1.b+RV2.b;
  //  RV1.a =RV1.a+RV2.a;
   // RV1.c =RV1.c+RV2.c;
   // RV2.a=0;
   // RV2.b=1;
  //  RV2.c=0;
    RealVariable &x= *new RealVariable(RV1.a + RV2.a, RV1.b + RV2.b, RV1.c + RV2.c);
    return x;

}

solver::RealVariable &solver::operator+(double DV1, solver::RealVariable &RV2) {
    RealVariable &x= *new RealVariable(DV1+RV2.a,  RV2.b,  RV2.c);
    //RV2.a =DV1+RV2.a;
    return x;
}

solver::RealVariable &solver::operator+(solver::RealVariable &RV1, double DV2) {
    RealVariable &x= *new RealVariable(DV2+RV1.a,  RV1.b,  RV1.c);
   // RV1.a =DV2+RV1.a;
    return x;
}
////////////not needed?
solver::RealVariable &solver::operator/(solver::RealVariable &RV1, solver::RealVariable &RV2) {
    RealVariable RV3;
    RV3.a=RV1.a/RV2.a;
    return RV3;
}

solver::RealVariable &solver::operator/(double DV1, solver::RealVariable &RV2) {
  //  RV2.a=DV1/RV2.a;
  //  RV2.b=DV1/RV2.b;
  //  RV2.c=DV1/RV2.c;
    RealVariable &x= *new RealVariable(DV1/RV2.a,  DV1/RV2.b,  DV1/RV2.c);
    return x;
}

solver::RealVariable &solver::operator/(solver::RealVariable &RV1, double DV2) {
 //   RV1.a=RV1.a/DV2;
 //   RV1.b=RV1.b/DV2;
  //  RV1.c=RV1.c/DV2;
    RealVariable &x= *new RealVariable(RV1.a/DV2,  RV1.b/DV2, RV1.c/DV2);
    return x;
}

solver::RealVariable &solver::operator==(solver::RealVariable &RV1, solver::RealVariable &RV2) {
    //////////////////////
    RealVariable &x1= *new RealVariable(RV1.a-RV2.a, RV1.b-RV2.b,  RV1.c-RV2.c);
    return x1;
}
//4+2x+x^2=20+2x
//4+x^2=20
//x^2=16

solver::RealVariable &solver::operator==(double DV1, solver::RealVariable &RV2) {
    RealVariable &x1= *new RealVariable(RV2.a-DV1, RV2.b,  RV2.c);
    return x1;
}

solver::RealVariable &solver::operator==(solver::RealVariable &RV1, double DV2) {
    RealVariable &x1= *new RealVariable(RV1.a-DV2, RV1.b,  RV1.c);
    return x1;
}
//////////////not needed?
solver::RealVariable &solver::operator^(solver::RealVariable &RV1, solver::RealVariable &RV2) {
    RealVariable &RV3= *new RealVariable();
    RV3.a=RV1.a;
    for (int i = 0; i < RV2.a; ++i) {
        RV1.a= RV1.a*RV3.a;

    }
    return RV3;
}
////////
solver::RealVariable &solver::operator^(double DV1, solver::RealVariable &RV2) {
    RealVariable &RV3=*new RealVariable(RV2.a,RV2.b,RV2.c);
    RV3.a=DV1;
    for (int i = 0; i < RV2.a; ++i) {
        RV3.a= RV3.a*DV1;

    }
    return RV3;
}

solver::RealVariable &solver::operator^(solver::RealVariable &RV1, double DV2) {
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
 //   RV1.a=RV1.a-RV2.a;
  //  RV1.b=RV1.b-RV2.b;
  //  RV1.c=RV1.c-RV2.c;
  //  RV2.a=0;
  //  RV2.b=1;
   // RV2.c=0;

    RealVariable &x= *new RealVariable(RV1.a-RV2.a,  RV1.b-RV2.b, RV1.c-RV2.c);
    return x;

}

solver::RealVariable &solver::operator-(double DV1, solver::RealVariable &RV2) {
    //RV2.a=DV1-RV2.a;
    RealVariable &x= *new RealVariable(DV1-RV2.a,  RV2.b, RV2.c);
    return x;
}

solver::RealVariable &solver::operator-(solver::RealVariable &RV1, double DV2) {
    //RV1.a=RV1.a-DV2;
    RealVariable &x= *new RealVariable(RV1.a-DV2,  RV1.b, RV1.c);
    return x;
}










solver::ComplexVariable solver::operator*(solver::ComplexVariable &CV1, solver::ComplexVariable &CV2) {
    return CV1;
}

/*solver::ComplexVariable &solver::operator*(std::complex<double> CDV1, std::complex<double> CDV2) {
    return (ComplexVariable &) CDV1;
}*/

solver::ComplexVariable &solver::operator*(double DV1, solver::ComplexVariable &CV2) {

    return CV2;
}

solver::ComplexVariable &solver::operator*(solver::ComplexVariable &CV1, double DV2) {
    return CV1;
}

solver::ComplexVariable &solver::operator*(std::complex<double> CDV1, solver::ComplexVariable &CV2) {
    return CV2;
}

solver::ComplexVariable &solver::operator*(solver::ComplexVariable &CV1, std::complex<double> CDV2) {
    return CV1;
}

solver::ComplexVariable &solver::operator/(solver::ComplexVariable &CV1, solver::ComplexVariable &CV2) {
    return CV1;
}

/*solver::ComplexVariable &solver::operator/(std::complex<double> CDV1, std::complex<double> CDV2) {
    return (ComplexVariable &)(CDV1);
}*/

solver::ComplexVariable &solver::operator/(double DV1, solver::ComplexVariable &CV2) {
    return CV2;
}

solver::ComplexVariable &solver::operator/(solver::ComplexVariable &CV1, double DV2) {
    return CV1;
}

solver::ComplexVariable &solver::operator/(std::complex<double> CDV1, solver::ComplexVariable &CV2) {
    return CV2;
}

solver::ComplexVariable &solver::operator/(solver::ComplexVariable &CV1, std::complex<double> CDV2) {
    return CV1;
}

solver::ComplexVariable &solver::operator==(solver::ComplexVariable &CV1, solver::ComplexVariable &CV2) {
    return CV1;
}

/*solver::ComplexVariable &solver::operator==(std::complex<double> CDV1, std::complex<double> CDV2) {
    return (ComplexVariable &)(CDV1);
}*/

solver::ComplexVariable &solver::operator==(double DV1, solver::ComplexVariable &CV2) {
    return CV2;
}

solver::ComplexVariable &solver::operator==(solver::ComplexVariable &CV1, double DV2) {
    return CV1;
}

solver::ComplexVariable &solver::operator==(std::complex<double> CDV1, solver::ComplexVariable &CV2) {
    return CV2;
}

solver::ComplexVariable &solver::operator==(solver::ComplexVariable &CV1, std::complex<double> CDV2) {
    return CV1;
}

solver::ComplexVariable &solver::operator^(solver::ComplexVariable &CV1, solver::ComplexVariable &CV2) {
    return CV2;
}

/*solver::ComplexVariable &solver::operator^(std::complex<double> CDV1, std::complex<double> CDV2) {
    return (ComplexVariable &)(CDV1);
}*/

solver::ComplexVariable &solver::operator^(double DV1, solver::ComplexVariable &CV2) {
    return CV2;
}

solver::ComplexVariable &solver::operator^(solver::ComplexVariable &CV1, double DV2) {
    return CV1;
}

solver::ComplexVariable &solver::operator^(std::complex<double> CDV1, solver::ComplexVariable &CV2) {
    return CV2;
}

solver::ComplexVariable &solver::operator^(solver::ComplexVariable &CV1, std::complex<double> CDV2) {
    return CV1;
}

solver::ComplexVariable &solver::operator-(solver::ComplexVariable &CV1, solver::ComplexVariable &CV2) {
    return CV1;
}

/*solver::ComplexVariable &solver::operator-(std::complex<double> CDV1, std::complex<double> CDV2) {
    return (ComplexVariable &)(CDV1);
}*/

solver::ComplexVariable &solver::operator-(double DV1, solver::ComplexVariable &CV2) {
    return CV2;
}

solver::ComplexVariable &solver::operator-(solver::ComplexVariable &CV1, double DV2) {
    return CV1;
}

solver::ComplexVariable &solver::operator-(std::complex<double> CDV1, solver::ComplexVariable &CV2) {
    return CV2;
}

solver::ComplexVariable &solver::operator-(solver::ComplexVariable &CV1, std::complex<double> CDV2) {
    return CV1;
}

solver::ComplexVariable &solver::operator+(solver::ComplexVariable &CV1, solver::ComplexVariable &CV2) {
    return CV1;
}

/*solver::ComplexVariable &solver::operator+(std::complex<double> CDV1, std::complex<double> CDV2) {
    return (ComplexVariable &)(CDV1);
}*/

solver::ComplexVariable &solver::operator+(double DV1, solver::ComplexVariable &CV2) {
    return CV2;
}

solver::ComplexVariable &solver::operator+(solver::ComplexVariable &CV1, double DV2) {
    return CV1;
}

solver::ComplexVariable &solver::operator+(std::complex<double> CDV1, solver::ComplexVariable &CV2) {
    return CV2;
}

solver::ComplexVariable &solver::operator+(solver::ComplexVariable &CV1, std::complex<double> CDV2) {
    return CV1;
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
        if((b*b)-4*a*c<0){
            throw std::invalid_argument(" There is no real solution");
        }
        double s = sqrt(b*b-4*a*c);
        results = (-b+s)/2*c;
        return results;
    }
    throw std::invalid_argument(" There is no real solution");
    //  return RV.ans;
}

std::complex<double> solver::solve(solver::ComplexVariable &CV1){
    return 0;
}