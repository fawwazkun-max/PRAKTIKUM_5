#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int read_next_integer(int *value) {
    char token[100];
    char *end;

    while (scanf("%99s", token) == 1) {
        long parsed = strtol(token, &end, 10);
        if (end != token && *end == '\0' && parsed >= INT_MIN && parsed <= INT_MAX) {
            *value = (int)parsed;
            return 1;
        }
    }

    return 0;
}

int main() {
    int matrix_size;
    int A[50][50], B[50][50], result[50][50];

    if (!read_next_integer(&matrix_size) || matrix_size < 1 || matrix_size > 50) {
        return 1;
    }

    for (int i = 0; i < matrix_size; i++) {
        for (int j = 0; j < matrix_size; j++) {
            if (!read_next_integer(&A[i][j])) return 1;
        }
    }

    for (int i = 0; i < matrix_size; i++) {
        for (int j = 0; j < matrix_size; j++) {
            if (!read_next_integer(&B[i][j])) return 1;
        }
    }

    for (int i = 0; i < matrix_size; i++) {
        for (int j = 0; j < matrix_size; j++) {
            result[i][j] = 0;
            for (int k = 0; k < matrix_size; k++) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf("Matriks AXB\n");
    for (int i = 0; i < matrix_size; i++) {
        for (int j = 0; j < matrix_size; j++) {
            if (j > 0) printf(" ");
            printf("%d", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
