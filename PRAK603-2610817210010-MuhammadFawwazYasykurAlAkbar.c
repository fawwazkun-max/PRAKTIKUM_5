#include <stdio.h>

int main() {
    int first_count, second_count;
    int first_row[100], second_row[100];

    scanf("%d %d", &first_count, &second_count);

    if (first_count != second_count) {
        printf("Jumlah tidak sama\n");
        return 0;
    }

    for (int i = 0; i < first_count; i++) {
        scanf("%d", &first_row[i]);
    }
    for (int i = 0; i < second_count; i++) {
        scanf("%d", &second_row[i]);
    }

    for (int i = 0; i < first_count; i++) {
        if (i > 0) printf(" ");
        printf("%d", first_row[i] * second_row[i]);
    }
    printf("\n");

    return 0;
}
