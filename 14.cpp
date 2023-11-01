#include <iostream>
#include <Eigen/Dense>

int main() {
    // Matriz A
    Eigen::Matrix3d A;
    A << 1, 0, 0, 2, 1, 0, 2, 3, 1;

    // Vetor B
    Eigen::Vector3d B;
    B << 5, 7, 2;

    // Resolver a equação A * X = B para X
    Eigen::Vector3d X = A.inverse() * B;

    std::cout << "Solução para A * X = B:" << std::endl;
    std::cout << "X = " << X << std::endl;

    // Matriz A2
    Eigen::Matrix3d A2;
    A2 << 1, 0, 0, 0, 1, 2, 0, 0, 1;

    // Vetor B2
    Eigen::Vector3d B2;
    B2 << -1, -3, -6;

    // Resolver a equação A2 * X2 = B2 para X2
    Eigen::Vector3d X2 = A2.inverse() * B2;

    std::cout << "Solução para A2 * X2 = B2:" << std::endl;
    std::cout << "X2 = " << X2 << std::endl;

    return 0;
}
