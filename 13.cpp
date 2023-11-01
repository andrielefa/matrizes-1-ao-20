#include <iostream>
#include <vector>


std::vector<std::vector<double>> adjunta(const std::vector<std::vector<double>>& matriz) {
    int n = matriz.size();
    std::vector<std::vector<double>> adj(n, std::vector<double>(n, 0.0));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            adj[i][j] = matriz[(j + 1) % n][(i + 1) % n] - matriz[(j + 1) % n][(i + 1) % n];
        }
    }

    return adj;
}

double determinante2x2(const std::vector<std::vector<double>>& matriz) {
    return matriz[0][0] * matriz[1][1] - matriz[0][1] * matriz[1][0];
}

int main() {
    
    std::vector<std::vector<double>> A = {{5, 4}, {6, 5}};
    
    std::vector<std::vector<double>> B = {{2, 5}, {1, 3}};

    std::vector<std::vector<double>> C = {{1, 0}, {0, 2}};

    std::vector<std::vector<double>> D = {{1, -1}, {1, 1}};

    std::vector<std::vector<double>> inversaA, inversaB, inversaC, inversaD;

    double detA = determinante2x2(A);

    if (detA != 0.0) {
        inversaA = adjunta(A);
        double invDetA = 1.0 / detA;
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                inversaA[i][j] *= invDetA;
            }
        }
    }

    double detB = determinante2x2(B);

    if (detB != 0.0) {
        inversaB = adjunta(B);
        double invDetB = 1.0 / detB;
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                inversaB[i][j] *= invDetB;
            }
        }
    }

    double detC = determinante2x2(C);

    if (detC != 0.0) {
        inversaC = adjunta(C);
        double invDetC = 1.0 / detC;
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                inversaC[i][j] *= invDetC;
            }
        }
    }

    double detD = determinante2x2(D);

    if (detD != 0.0) {
        inversaD = adjunta(D);
        double invDetD = 1.0 / detD;
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                inversaD[i][j] *= invDetD;
            }
        }
    }

    std::cout << "Matriz Inversa de A:" << std::endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            std::cout << inversaA[i][j] << " ";
        }
        std::cout << std::endl;
    }

    std::cout << "Matriz Inversa de B:" << std::endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            std::cout << inversaB[i][j] << " ";
        }
        std::cout << std::endl;
    }

    std::cout << "Matriz Inversa de C:" << std::endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            std::cout << inversaC[i][j] << " ";
        }
        std::cout << std::endl;
    }

    std::cout << "Matriz Inversa de D:" << std::endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            std::cout << inversaD[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
