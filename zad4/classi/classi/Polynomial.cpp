

#include "Polynomial.h"
#include <iostream>

Polynomial::Polynomial(double a, double b, double c) {
    this->a = a; 
    this->b = b; 
    this->c = c; 
}

// Сложение
void Polynomial::add(const Polynomial& other) {
    a += other.a; 
    b += other.b; 
    c += other.c; 
}

// Вычетание
void Polynomial::minus(const Polynomial& other) {
    a -= other.a; 
    b -= other.b; 
    c -= other.c; 
}

// Умножение
void Polynomial::umnoj(const Polynomial& other) {
    double A = a * other.a;
    double B = a * other.b + b * other.a;
    double C = a * other.c + b * other.b + c * other.a;

    a = A;
    b = B;
    c = C;
}

void Polynomial::show() const {
    std::cout << a << "x^2 + " << b << "x + " << c << std::endl;
}
