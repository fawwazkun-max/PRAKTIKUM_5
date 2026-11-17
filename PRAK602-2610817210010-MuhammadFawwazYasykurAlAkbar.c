#include <stdio.h>

int main() {
    int room_count;
    int room_counts[100];

    scanf("%d", &room_count);
    for (int i = 0; i < room_count; i++) {
        scanf("%d", &room_counts[i]);
    }

    for (int i = 0; i < room_count; i++) {
        if (i > 0) printf(" ");
        printf("%d", room_counts[i] * (i + 1));
    }
    printf("\n");

    return 0;
}
