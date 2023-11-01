#include <iostream>

int main() {
   
    double x, y, z;

    z = 0;
    y = 0.5 * z;
    x = 0.5 * y;

    std::cout << "Solução:" << std::endl;
    std::cout << "x = " << x << std::endl;
    std::cout << "y = " << y << std::endl;
    std::cout << "z = " << z << std::endl;

    return 0;
}