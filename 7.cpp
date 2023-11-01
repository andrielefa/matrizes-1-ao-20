#include <iostream>

int main() {
    double x, y;


    double a1 = 2.0, b1 = 1.0, c1 = 5.0;
    double a2 = 1.0, b2 = -3.0, c2 = -2.0;

    
    double determinante = a1 * b2 - a2 * b1;

    if (determinante != 0) {
       
        x = (c1 * b2 - c2 * b1) / determinante;
        y = (a1 * c2 - a2 * c1) / determinante;

        std::cout << "Solução:" << std::endl;
        std::cout << "x = " << x << std::endl;
        std::cout << "y = " << y << std::endl;
    } else {
        std::cout << "O sistema não tem uma única solução." << std::endl;
    }

    return 0;
}
