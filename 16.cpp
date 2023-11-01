#include <iostream>
#include <vector>

int main() {
  
    int x = 1;
    int y = 2;
    int z = 3;

    std::vector<std::vector<int>> matrizA = {{2, 0, -3}, {-1, 3, 0}, {x, y, z}};

    bool isAntisymmetric = true;
    for (int i = 0; i < matrizA.size(); i++) {
        for (int j = 0; j < matrizA[i].size(); j++) {
            if (matrizA[i][j] != -matrizA[j][i]) {
                isAntisymmetric = false;
                break;
            }
        }
        if (!isAntisymmetric) {
            break;
        }
    }

    int somaXYZ = x + y + z;

    if (isAntisymmetric) {
        std::cout << "A matriz A é antissimétrica." << std::endl;
    } else {
        std::cout << "A matriz A não é antissimétrica." << std::endl;
    }

    std::cout << "A soma x + y + z é: " << somaXYZ << std::endl;

    return 0;
}