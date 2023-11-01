#include <iostream>
#include <vector>

int main() {
   
    std::vector<std::vector<int>> A = {{1, 0, 2}, {4, -1, 3}, {1, 0, 1}};
    std::vector<std::vector<int>> B = {{4, 3, 5}, {1, 0, 0}};
    std::vector<std::vector<int>> C = {{2, 1, 1}, {0, -1, 1}};

    
    std::vector<std::vector<int>> AC(3, std::vector<int>(3, 0));

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                AC[i][j] += A[i][k] * C[k][j];
            }
        }
    }

    
    std::vector<std::vector<int>> twoB(3, std::vector<int>(3, 0));

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            twoB[i][j] = 2 * B[i][j];
        }
    }

  
    std::vector<std::vector<int>> X(3, std::vector<int>(3, 0));

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            X[i][j] = AC[i][j] + twoB[i][j];
        }
    }

    
    std::vector<std::vector<int>> opcaoA = {{12, 4, 15}, {3, 10, -1}, {5, 10, 1}};
    std::vector<std::vector<int>> opcaoB = {{4, 10, 3}, {2, 4, 1}, {12, 4, 5}};
    std::vector<std::vector<int>> opcaoC = {{8, 1, 2}, {2, 4, 5}, {4, 3, 1}};
    std::vector<std::vector<int>> opcaoD = {{12, 4, 13}, {1, 0, 1}, {0, 0, 0}};

   
    if (X == opcaoA) {
        std::cout << "A opção A corresponde ao resultado." << std::endl;
    } else if (X == opcaoB) {
        std::cout << "A opção B corresponde ao resultado." << std::endl;
    } else if (X == opcaoC) {
        std::cout << "A opção C corresponde ao resultado." << std::endl;
    } else if (X == opcaoD) {
        std::cout << "A opção D corresponde ao resultado." << std::endl;
    } else {
        std::cout << "Nenhuma das opções corresponde ao resultado." << std::endl;
    }

    return 0;
}