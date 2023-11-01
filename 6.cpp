#include <iostream>

int main() {
    

    double x, y;

    
    double a = 2.0, b = 1.0, c = 5;
    double d = 1.0, e = -3.0, f = -2;

    double determinante = a * e - b * d;

    if (determinante != 0) {
        x = (c * e - b * f) / determinante;
        y = (a * f - c * d) / determinante;
        
        std::cout << "Solucao:" << std::endl;
        std::cout << "x = " << x << std::endl;
        std::cout << "y = " << y << std::endl;
    } else {
        std::cout << "O sistema nao tem uma unica solucao." << std::endl;
    }

    return 0;
}
