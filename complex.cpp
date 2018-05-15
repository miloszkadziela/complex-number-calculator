#include"complex.h"
#include <iostream>
#include <iomanip>
#include <cmath>
#define PRECISION 2

Complex::Complex(double real, double imag) {
    this -> real = real;
    this -> imag = imag;
}

Complex::Complex(const Complex& RHS) {
    real = RHS.real;
    imag = RHS.imag;
}

Complex& Complex::operator+=(const Complex& RHS) {
    real += RHS.real;
    imag += RHS.imag;
    return *this;
}

Complex& Complex::operator-=(const Complex& RHS) {
    real -= RHS.real;
    imag -= RHS.imag;
    return *this;
}

Complex& Complex::operator*=(const Complex& RHS) {
    real = real * RHS.real - imag * RHS.imag;
    imag = real * RHS.imag + imag * RHS.real;
    return *this;
}

Complex& Complex::operator/=(const Complex& RHS) {
    real = (real * RHS.real + imag * RHS.imag) / (pow(RHS.real, 2) + pow(RHS.imag, 2));
    imag = (imag * RHS.real - real * RHS.imag) / (pow(RHS.real, 2) + pow(RHS.imag, 2));
    return *this;
}

double Complex::getAmplitude() {
    return sqrt(pow(real, 2) + pow(imag, 2));
}

double Complex::getPhase() {
    return atan(imag / real);
}

bool operator==(Complex& LHS, Complex& RHS) {
    return (LHS.real == RHS.real && LHS.imag == RHS.imag);
}

std::ostream& operator<<(std::ostream& Out, Complex& target) {
    Out << std::setprecision(PRECISION);
    Out << "("  << target.real << ", ";
    Out << target.imag;
    Out << "i)" << std::endl;
    return Out;
}

Complex operator+(const Complex& LHS, const Complex& RHS) {
    Complex target;
    target += LHS;
    target += RHS;
    return target;
}

Complex operator-(const Complex& LHS, const Complex& RHS) {
    Complex target;
    target += LHS;
    target -= RHS;
    return target;
}

Complex operator*(const Complex& LHS, const Complex& RHS) {
    Complex target;
    target += LHS;
    target *= RHS;
    return target;
}

Complex operator/(const Complex& LHS, const Complex& RHS) {
    Complex target;
    target += LHS;
    target /= RHS;
    return target;
}
