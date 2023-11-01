#include <iostream>

int main() {
    int matrizVendas[3][3] = {
        {30, 19, 20},
        {15, 10, 8},
        {12, 16, 11}
    };

    if (matrizVendas[1][1] == 11) {
        std::cout << "a) Correto. A quantidade de produtos do tipo P2 vendidos pela loja L2 é 11." << std::endl;
    } else {
        std::cout << "a) Incorreto." << std::endl;
    }

    if (matrizVendas[0][0] == 30) {
        std::cout << "b) Correto. A quantidade de produtos do tipo P1 vendidos pela loja L1 é 30." << std::endl;
    } else {
        std::cout << "b) Incorreto." << std::endl;
    }

    int somaP3 = matrizVendas[2][0] + matrizVendas[2][1] + matrizVendas[2][2];
    if (somaP3 == 40) {
        std::cout << "c) Correto. A soma das quantidades de produtos do tipo P3 vendidos pelas três lojas é 40." << std::endl;
    } else {
        std::cout << "c) Incorreto." << std::endl;
    }

    int somaP1 = matrizVendas[0][0] + matrizVendas[0][1] + matrizVendas[0][2];
    if (somaP1 == 36) {
        std::cout << "d) Correto. A soma das quantidades de produtos do tipo P1 vendidos pelas lojas L1, L2 e L3 é 36." << std::endl;
    } else {
        std::cout << "d) Incorreto." << std::endl;
    }

    int somaP1P2 = matrizVendas[0][0] + matrizVendas[1][0];
    if (somaP1P2 == 45) {
        std::cout << "e) Correto. A soma das quantidades dos produtos dos tipos P1 e P2 vendidos pela loja L1 é 45." << std::endl;
    } else {
        std::cout << "e) Incorreto." << std::endl;
    }

    return 0;
}