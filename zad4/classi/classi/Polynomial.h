
#ifndef POLYNOMIAL

#define POLYNOMIAL

class Polynomial {
private:
    double a; 
    double b; 
    double c; 

public:
    Polynomial(double a = 0, double b = 0, double c = 0);
    void add(const Polynomial& other);
    void minus(const Polynomial& other);
    void umnoj(const Polynomial& other);
    void show() const;
};

#endif // POLYNOMIAL