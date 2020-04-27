//
// Created by nivtal9 & AVI on 27.4.2020.
//

#include "solver.hpp"

solver::RealVariable &solver::operator*(solver::RealVariable &RV1, solver::RealVariable &RV2) {
    return RV1;
}

solver::RealVariable &solver::operator*(double DV1, solver::RealVariable &RV2) {
    return RV2;
}

solver::RealVariable &solver::operator*(solver::RealVariable &RV1, double DV2) {
    return RV1;
}

solver::RealVariable &solver::operator+(solver::RealVariable &RV1, solver::RealVariable &RV2) {
    return RV1;
}

solver::RealVariable &solver::operator+(double DV1, solver::RealVariable &RV2) {
    return RV2;
}

solver::RealVariable &solver::operator+(solver::RealVariable &RV1, double DV2) {
    return RV1;
}

solver::RealVariable &solver::operator/(solver::RealVariable &RV1, solver::RealVariable &RV2) {
    return RV1;
}

solver::RealVariable &solver::operator/(double DV1, solver::RealVariable &RV2) {
    return RV2;
}

solver::RealVariable &solver::operator/(solver::RealVariable &RV1, double DV2) {
    return RV1;
}

solver::RealVariable &solver::operator==(solver::RealVariable &RV1, solver::RealVariable &RV2) {
    return RV1;
}

solver::RealVariable &solver::operator==(double DV1, solver::RealVariable &RV2) {
    return RV2;
}

solver::RealVariable &solver::operator==(solver::RealVariable &RV1, double DV2) {
    return RV1;
}

solver::RealVariable &solver::operator^(solver::RealVariable &RV1, solver::RealVariable &RV2) {
    return RV1;
}

solver::RealVariable &solver::operator^(double DV1, solver::RealVariable &RV2) {
    return RV2;
}

solver::RealVariable &solver::operator^(solver::RealVariable &RV1, double DV2) {
    return RV1;
}

solver::RealVariable &solver::operator-(solver::RealVariable &RV1, solver::RealVariable &RV2) {
    return RV1;
}

solver::RealVariable &solver::operator-(double DV1, solver::RealVariable &RV2) {
    return RV2;
}

solver::RealVariable &solver::operator-(solver::RealVariable &RV1, double DV2) {
    return RV1;
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
    return 0;
}

std::complex<double> solver::solve(solver::ComplexVariable &CV1){
    return 0;
}
