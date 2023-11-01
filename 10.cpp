#include <iostream>
#include <vector>

double produtoEscalar(const std::vector<double>& v1, const std::vector<double>& v2) {
    double resultado = 0;
    for (size_t i = 0; i < v1.size(); i++) {
        resultado += v1[i] * v2[i];
    }
    return resultado;
}

int main() {
  
    std::vector<double> vetor_a = {1, 2, 5, -1, 7, 2};
    std::vector<double> vetor_t = {1, 1, 1, 1, 1, 1};

    std::vector<double> matriz_X(vetor_a.size());

    for (size_t i = 0; i < vetor_a.size(); i++) {
        matriz_X[i] = vetor_a[i] * vetor_t[i];
    }

    std::cout << "a) Matriz X:" << std::endl;
    for (size_t i = 0; i < matriz_X.size(); i++) {
        std::cout << matriz_X[i] << " ";
    }
    std::cout << std::endl;

    std::vector<double> vetor_b = {1, 2, 5, 1};
    std::vector<double> vetor_c = {0, 0, 2, 3};

    std::vector<double> vetor_X_b(vetor_b.size());

    for (size_t i = 0; i < vetor_b.size(); i++) {
        vetor_X_b[i] = vetor_c[i] - vetor_b[i];
    }

    std::cout << "b) Matriz X:" << std::endl;
    for (size_t i = 0; i < vetor_X_b.size(); i++) {
        std::cout << vetor_X_b[i] << " ";
    }
    std::cout << std::endl;

    std::vector<double> vetor_d = {1, 1, 1};
    std::vector<double> vetor_e = {2, 3, 4};
    std::vector<double> vetor_X_c(vetor_d.size());

    for (size_t i = 0; i < vetor_d.size(); i++) {
        vetor_X_c[i] = (vetor_e[i] / 2) / vetor_d[i];
    }

    std::cout << "c) Matriz X:" << std::endl;
    for (size_t i = 0; i < vetor_X_c.size(); i++) {
        std::cout << vetor_X_c[i] << " ";
    }
    std::cout << std::endl;

    std::vector<double> vetor_f = {1, 1};
    std::vector<double> vetor_g = {2, 7};
    std::vector<double> vetor_h = {1, 4};
    std::vector<double> vetor_i = {7, 2};

    double resultado_d = produtoEscalar(vetor_f, vetor_g) - produtoEscalar(vetor_h, vetor_i);
    std::vector<double> vetor_X_d(vetor_f.size());

    for (size_t i = 0; i < vetor_f.size(); i++) {
        vetor_X_d[i] = resultado_d / (3 * vetor_f[i]);
    }

    std::cout << "d) Matriz X:" << std::endl;
    for (size_t i = 0; i < vetor_X_d.size(); i++) {
        std::cout << vetor_X_d[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}