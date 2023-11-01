#include <iostream>
#include <vector>

// Função para realizar o produto de duas matrizes
std::vector<std::vector<int>> produtoMatriz(const std::vector<std::vector<int>>& matrizA, const std::vector<std::vector<int>>& matrizB) {
    int linhasA = matrizA.size();
    int colunasA = matrizA[0].size();
    int colunasB = matrizB[0].size();

    std::vector<std::vector<int>> resultado(linhasA, std::vector<int>(colunasB, 0));

    for (int i = 0; i < linhasA; i++) {
        for (int j = 0; j < colunasB; j++) {
            for (int k = 0; k < colunasA; k++) {
                resultado[i][j] += matrizA[i][k] * matrizB[k][j];
            }
        }
    }

    return resultado;
}

void imprimirMatriz(const std::vector<std::vector<int>>& matriz) {
    for (int i = 0; i < matriz.size(); i++) {
        for (int j = 0; j < matriz[i].size(); j++) {
            std::cout << matriz[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    // a) Produto de duas matrizes
    std::vector<std::vector<int>> matrizA = {{0, 1, 1, 0}};
    std::vector<std::vector<int>> matrizB = {{4, 7}, {2, 3}};

    std::vector<std::vector<int>> resultadoA = produtoMatriz(matrizA, matrizB);

    std::cout << "a) Resultado:" << std::endl;
    imprimirMatriz(resultadoA);

    // b) Produto de duas matrizes
    std::vector<std::vector<int>> matrizC = {{1, 2, 3}};
    std::vector<std::vector<int>> matrizD = {{3, 1}, {1, 2}, {1, 2}};

    std::vector<std::vector<int>> resultadoB = produtoMatriz(matrizC, matrizD);

    std::cout << "b) Resultado:" << std::endl;
    imprimirMatriz(resultadoB);

    return 0;
}


