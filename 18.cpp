#include <iostream>
#include <vector>

int main() {
  
    std::vector<std::vector<int>> vendas = {{20, 8}, {15, 12}};

    int taxaLucroP1 = 3; // R$ 3,00 por peça P1
    int taxaLucroP2 = 2; // R$ 2,00 por peça P2

    std::vector<std::vector<int>> lucros(2, std::vector<int>(2, 0));

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            lucros[i][j] = vendas[i][j] * (i == 0 ? taxaLucroP1 : taxaLucroP2);
        }
    }

    int lucroE1 = lucros[0][0] + lucros[0][1];
    int lucroE2 = lucros[1][0] + lucros[1][1];

    std::cout << "Matriz de Lucros:" << std::endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            std::cout << lucros[i][j] << " ";
        }
        std::cout << std::endl;
    }

    std::cout << "Lucro para E1: R$ " << lucroE1 << std::endl;
    std::cout << "Lucro para E2: R$ " << lucroE2 << std::endl;

    return 0;
}