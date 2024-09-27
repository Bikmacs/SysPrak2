
#include "Polynomial.h"
#include <iostream>

int main() {

    setlocale(0, "rus");

    Polynomial p1(1, 2, 3);
    Polynomial p2(4, 5, 6);

    std::cout << "Многочлен 1: ";
    p1.show(); 

    std::cout << "Многочлен 2: ";
    p2.show(); 

    p1.add(p2);
    std::cout << "Сумма: ";
    p1.show(); 

    p1.minus(Polynomial(4, 5, 6)); // возвращаем p1 к исходному значению
    std::cout << "После вычитания: ";
    p1.minus(p2); 
    p1.show(); 

    p1.umnoj(Polynomial(2, 0, 0)); // умножаем на 2
    std::cout << "После умножения на 2: ";
    p1.show();

    return 0;
}
