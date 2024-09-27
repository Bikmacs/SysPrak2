#include <iostream>
#include <algorithm>

class Polynomial {
private:
    double coefficients[10]; // Фиксированный размер массива
    int size;

public:
    // Конструктор по умолчанию
    Polynomial() : size(0) {
        for (int i = 0; i < 10; ++i) {
            coefficients[i] = 0.0;
        }
    }

    // Метод для установки коэффициентов
    void setCoefficients(const double* coeffs, int n) {
        size = n;
        for (int i = 0; i < 10; ++i) {
            coefficients[i] = (i < n) ? coeffs[i] : 0.0;
        }
    }

    // Метод для получения коэффициента по степени
    double getCoefficient(int degree) const {
        if (degree < 0 || degree >= size) {
            return 0.0;
        }
        return coefficients[degree];
    }

    // Метод для сложения многочленов
    Polynomial operator+(const Polynomial& other) const {
        int maxSize = std::max(size, other.size);
        double resultCoeffs[10] = { 0.0 };

        for (int i = 0; i < maxSize; ++i) {
            resultCoeffs[i] = getCoefficient(i) + other.getCoefficient(i);
        }

        Polynomial result;
        result.setCoefficients(resultCoeffs, maxSize);
        return result;
    }

    // Метод для вычитания многочленов
    Polynomial operator-(const Polynomial& other) const {
        int maxSize = std::max(size, other.size);
        double resultCoeffs[10] = { 0.0 };

        for (int i = 0; i < maxSize; ++i) {
            resultCoeffs[i] = getCoefficient(i) - other.getCoefficient(i);
        }

        Polynomial result;
        result.setCoefficients(resultCoeffs, maxSize);
        return result;
    }

    // Метод для умножения многочленов
    Polynomial operator*(const Polynomial& other) const {
        int resultSize = size + other.size - 1;
        double resultCoeffs[10] = { 0.0 };

        for (int i = 0; i < size; ++i) {
            for (int j = 0; j < other.size; ++j) {
                resultCoeffs[i + j] += coefficients[i] * other.coefficients[j];
            }
        }

        Polynomial result;
        result.setCoefficients(resultCoeffs, resultSize);
        return result;
    }

    // Метод для вывода многочлена
    void print() const {
        for (int i = size - 1; i >= 0; --i) {
            if (coefficients[i] != 0) {
                std::cout << coefficients[i] << "x^" << i;
                if (i > 0) {
                    std::cout << " + ";
                }
            }
        }
        std::cout << std::endl;
    }
};

int main() {
    double coeffs1[] = { 1, 2, 3 };
    double coeffs2[] = { 4, 5, 6 };

    Polynomial p1;
    Polynomial p2;

    p1.setCoefficients(coeffs1, 3);
    p2.setCoefficients(coeffs2, 3);

    Polynomial p3 = p1 + p2;
    Polynomial p4 = p1 - p2;
    Polynomial p5 = p1 * p2;

    std::cout << "p1: ";
    p1.print();
    std::cout << "p2: ";
    p2.print();
    std::cout << "p1 + p2: ";
    p3.print();
    std::cout << "p1 - p2: ";
    p4.print();
    std::cout << "p1 * p2: ";
    p5.print();

    return 0;
}
