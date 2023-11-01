#include <iostream>

int main() {
   
    double a11 = 1, a12 = 1, a13 = 5;
    double a21 = 2, a22 = 7, a23 = 1;
    double a31 = -4, a32 = -3, a33 = 1;

    double b1 = 1, b2 = 2, b3 = -4;

    double x, y, z;

    double determinante = a11 * (a22 * a33 - a23 * a32) - a12 * (a21 * a33 - a23 * a31) + a13 * (a21 * a32 - a22 * a31);

    if (determinante != 0) {
        x = ((b1 * (a22 * a33 - a23 * a32) - a12 * (b2 * a33 - a23 * b3) + a13 * (b2 * a32 - a22 * b3)) / determinante);
        y = ((a11 * (b2 * a33 - a23 * b3) - b1 * (a21 * a33 - a23 * a31) + a13 * (a21 * b3 - b2 * a31)) / determinante);
        z = ((a11 * (a22 * b3 - b2 * a32) - a12 * (a21 * b3 - b2 * a31) + b1 * (a21 * a32 - a22 * a31)) / determinante);

        std::cout << "Solução:" << std::endl;
        std::cout << "x = " << x << std::endl;
        std::cout << "y = " << y << std::endl;
        std::cout << "z = " << z << std::endl;
    } else {
        std::cout << "O sistema não tem uma única solução." << std::endl;
    }

    return 0;
}