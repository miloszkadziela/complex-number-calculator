#include<iostream>

class Complex {
    public:
        double real;
        double imag;

        Complex(double real = 0, double imag = 0);
        Complex(const Complex& RHS);

        Complex& operator+=(const Complex& RHS);
        Complex& operator-=(const Complex& RHS);
        Complex& operator*=(const Complex& RHS);
        Complex& operator/=(const Complex& RHS);
        
        double getAmplitude();
        double getPhase();
};

bool operator==(Complex& LHS, Complex& RHS);
std::ostream& operator<<(std::ostream& Out, Complex& target);
Complex operator+(const Complex& LHS, const Complex& RHS);
Complex operator-(const Complex& LHS, const Complex& RHS);
Complex operator*(const Complex& LHS, const Complex& RHS);
Complex operator/(const Complex& LHS, const Complex& RHS);
