//
// Created by nivtal9 & AVI on 27.4.2020.
//

#ifndef SOLVER_A_SOLVER_HPP
#define SOLVER_A_SOLVER_HPP

#include <iostream>
#include <complex>
//using namespace std;
namespace solver {
    class RealVariable {
    private:
        double a;
        double b;
        double c;
    public:
        double ans;
        RealVariable(double a,double b, double c){
            this->a=a;
            this->b=b;
            this->c=c;
        }
        RealVariable(){
            (*this).a=0;
            (*this).b=1;
            (*this).c=0;
        }
        double get_a() const{
            return a;
        }
        double get_b() const{
            return b;
        }
        double get_c() const{
            return c;
        }
        friend RealVariable operator*(RealVariable &RV1, RealVariable &RV2);
        friend RealVariable& operator*(double DV1, RealVariable &RV2);
        friend RealVariable& operator*(RealVariable &RV1, double DV2);

        friend RealVariable& operator+(RealVariable &RV1, RealVariable &RV2);
        friend RealVariable& operator+(double DV1, RealVariable &RV2);
        friend RealVariable& operator+(RealVariable &RV1, double DV2);

        friend RealVariable& operator/(RealVariable &RV1, RealVariable &RV2);
        friend RealVariable& operator/(double DV1, RealVariable &RV2);
        friend RealVariable& operator/(RealVariable &RV1, double DV2);

        friend RealVariable& operator==(RealVariable &RV1, RealVariable &RV2);
        friend RealVariable& operator==(double DV1, RealVariable &RV2);
        friend RealVariable& operator==(RealVariable &RV1, double DV2);

        friend RealVariable& operator^(RealVariable &RV1, RealVariable &RV2);
        friend RealVariable& operator^(double DV1, RealVariable &RV2);
        friend RealVariable& operator^(RealVariable &RV1, double DV2);

        friend RealVariable& operator-(RealVariable &RV1, RealVariable &RV2);
        friend RealVariable& operator-(double DV1, RealVariable &RV2);
        friend RealVariable& operator-(RealVariable &RV1, double DV2);
    };

    class ComplexVariable {
    private:
        std::complex<double> y;
    public:
        ComplexVariable(std::complex<double> y){
            (*this).y=y;
        }
        ComplexVariable(){
            (*this).y=(0);
        }
        friend ComplexVariable operator*(ComplexVariable &CV1, ComplexVariable &CV2);
        friend ComplexVariable& operator*(std::complex<double> CDV1, std::complex<double> CDV2);
        friend ComplexVariable& operator*(double DV1, ComplexVariable &CV2);
        friend ComplexVariable& operator*(ComplexVariable &CV1, double DV2);
        friend ComplexVariable& operator*(std::complex<double> CDV1, ComplexVariable &CV2);
        friend ComplexVariable& operator*(ComplexVariable &CV1, std::complex<double> CDV2);

        friend ComplexVariable& operator/(ComplexVariable &CV1, ComplexVariable &CV2);
        friend ComplexVariable& operator/(std::complex<double> CDV1, std::complex<double> CDV2);
        friend ComplexVariable& operator/(double DV1, ComplexVariable &CV2);
        friend ComplexVariable& operator/(ComplexVariable &CV1, double DV2);
        friend ComplexVariable& operator/(std::complex<double> CDV1, ComplexVariable &CV2);
        friend ComplexVariable& operator/(ComplexVariable &CV1, std::complex<double> CDV2);

        friend ComplexVariable& operator==(ComplexVariable &CV1, ComplexVariable &CV2);
        friend ComplexVariable& operator==(std::complex<double> CDV1, std::complex<double> CDV2);
        friend ComplexVariable& operator==(double DV1, ComplexVariable &CV2);
        friend ComplexVariable& operator==(ComplexVariable &CV1, double DV2);
        friend ComplexVariable& operator==(std::complex<double> CDV1, ComplexVariable &CV2);
        friend ComplexVariable& operator==(ComplexVariable &CV1, std::complex<double> CDV2);

        friend ComplexVariable& operator^(ComplexVariable &CV1, ComplexVariable &CV2);
        friend ComplexVariable& operator^(std::complex<double> CDV1, std::complex<double> CDV2);
        friend ComplexVariable& operator^(double DV1, ComplexVariable &CV2);
        friend ComplexVariable& operator^(ComplexVariable &CV1, double DV2);
        friend ComplexVariable& operator^(std::complex<double> CDV1, ComplexVariable &CV2);
        friend ComplexVariable &operator^(ComplexVariable &CV1, std::complex<double> CDV2);

        friend ComplexVariable &operator-(ComplexVariable &CV1, ComplexVariable &CV2);
        friend ComplexVariable &operator-(std::complex<double> CDV1, std::complex<double> CDV2);
        friend ComplexVariable &operator-(double DV1, ComplexVariable &CV2);
        friend ComplexVariable &operator-(ComplexVariable &CV1, double DV2);
        friend ComplexVariable &operator-(std::complex<double> CDV1, ComplexVariable &CV2);
        friend ComplexVariable &operator-(ComplexVariable &CV1, std::complex<double> CDV2);

        friend ComplexVariable &operator+(ComplexVariable &CV1, ComplexVariable &CV2);
        friend ComplexVariable &operator+(std::complex<double> CDV1, std::complex<double> CDV2);
        friend ComplexVariable &operator+(double DV1, ComplexVariable &CV2);
        friend ComplexVariable &operator+(ComplexVariable &CV1, double DV2);
        friend ComplexVariable &operator+(std::complex<double> CDV1, ComplexVariable &CV2);
        friend ComplexVariable &operator+(ComplexVariable &CV1, std::complex<double> CDV2);
    };

    double solve(solver::RealVariable& RV);
    std::complex<double> solve(solver::ComplexVariable& CV);
}
#endif //SOLVER_A_SOLVER_HPP
