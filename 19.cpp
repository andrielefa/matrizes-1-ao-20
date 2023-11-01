#include <iostream>
#include <cmath>

int main() {
    
    int A[3][3];

  
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            A[i][j] = pow(-1, i + j);
        }
    }

   
    bool afirmacaoA = true;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (A[i][j] != -A[j][i]) {
                afirmacaoA = false;
                break;
            }
        }
        if (!afirmacaoA) {
            break;
        }
    }


    int determinanteA = A[0][0] * (A[1][1] * A[2][2] - A[1][2] * A[2][1]) -
                       A[0][1] * (A[1][0] * A[2][2] - A[1][2] * A[2][0]) +
                       A[0][2] * (A[1][0] * A[2][1] - A[1][1] * A[2][0]);

    bool afirmacaoB = (determinanteA != 0);

    int somaDiagonalPrincipal = A[0][0] + A[1][1] + A[2][2];
    bool afirmacaoC = (somaDiagonalPrincipal == 0);


    bool afirmacaoD = true;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (A[i][j] != std::cos((i + j) * M_PI)) {
                afirmacaoD = false;
                break;
            }
        }
        if (!afirmacaoD) {
            break;
        }
    }

  
    bool afirmacaoE = (A[1][1] == 0);


    std::cout << "a) A = -At: " << (afirmacaoA ? "Verdadeiro" : "Falso") << std::endl;
    std::cout << "b) A é inversível: " << (afirmacaoB ? "Verdadeiro" : "Falso") << std::endl;
    std::cout << "c) a1 + a2 + a33 = 0: " << (afirmacaoC ? "Verdadeiro" : "Falso") << std::endl;
    std::cout << "d) a_ij = cos((i + j)π): " << (afirmacaoD ? "Verdadeiro" : "Falso") << std::endl;
    std::cout << "e) a11821831 = 0: " << (afirmacaoE ? "Verdadeiro" : "Falso") << std::endl;

    return 0;
}