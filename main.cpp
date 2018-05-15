#include"complex.h"
#include<iostream>

int main () {
    Complex a(5, 10);
    Complex b(6, 11);
    Complex c(7, 12);
    
    std::cout << a;
    a += b += c;
    std::cout << a;

    Complex d(1, 2);
    std::cout << d;

    Complex e(1, 1);
    std::cout << e;
    e *= d * 10;
    std::cout << e;
    return 0;
}
