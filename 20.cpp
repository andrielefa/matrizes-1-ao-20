#include <iostream>
#include <vector>
#include <cmath>

int main() {

    double a, B;
    std::cout << "Digite o valor de 'a': ";
    std::cin >> a;
    std::cout << "Digite o valor de 'B': ";
    std::cin >> B;

 
    double ab11 = 2 + a + B;
    double ab12 = 1;
    double ab21 = 2 + a + 2 * B;
    double ab22 = 2;

    
    double detAB = ab11 * ab22 - ab12 * ab21;

   
    if (std::abs(detAB) < 1e-10) {
        std::cout << "O determinante de AB é muito próximo de zero. A matriz AB não possui inversa." << std::endl;
    } else {
      
        double invAB11 = ab22 / detAB;
        double invAB12 = -ab12 / detAB;
        double invAB21 = -ab21 / detAB;
        double invAB22 = ab11 / detAB;

       
        double somaDiagonal = invAB11 + invAB22;

        std::cout << "A soma dos elementos da diagonal principal da matriz inversa de AB é: " << somaDiagonal << std::endl;
    }

    return 0;
}