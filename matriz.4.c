#include <stdio.h>
#include <cmath>

int main() {
    double x, y, t;

    // Equação 1: x² = 45
    x = sqrt(45);

    // Equação 2: x^2 + 2x + 5t = 31
    t = (-14 - 6 * sqrt(5)) / 5;

    // Equação 3: y = t
    y = t;

    // Imprima os resultados
    std::cout << "x = " << x << std::endl;
    std::cout << "y = " << y << std::endl;
    std::cout << "t = " << t << std::endl;

    return 0;
}