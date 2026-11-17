#include <stdio.h>
#include <string.h>

int main() {
    char first_name[100], last_name[100], full_name[200];
    int letter_count = 0;

    printf("Nama Depan : ");
    fgets(first_name, sizeof(first_name), stdin);
    printf("Nama Belakang : ");
    fgets(last_name, sizeof(last_name), stdin);
    first_name[strcspn(first_name, "\n")] = '\0';
    last_name[strcspn(last_name, "\n")] = '\0';

    strcpy(full_name, first_name);
    strcat(full_name, " ");
    strcat(full_name, last_name);

    for (int i = 0; full_name[i] != '\0'; i++) {
        if (full_name[i] != ' ') {
            letter_count++;
        }
    }

    printf("Nama Lengkap : %s\n", full_name);
    printf("Panjang Nama (tanpa spasi) : %d\n", letter_count);

    return 0;
}
