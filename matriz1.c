#include <stdio.h>

int main() {
    int A[3][3];
    int B[3][3];

   
        for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i == j) {
                A[i][j] = 1;
            } else {
                A[i][j] = 0;
            }
        }
    }

    // Preencha a matriz B de acordo com as condições bij = i + 2j se i ? j, i - 3j se i = j
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i != j) {
                B[i][j] = i + 2 * j;
            } else {
                B[i][j] = i - 3 * j;
            }
        }
    }

    // Imprima a matriz A
    printf("Matriz A:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    // Imprima a matriz B
    printf("Matriz B:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }

    return 0;
}





