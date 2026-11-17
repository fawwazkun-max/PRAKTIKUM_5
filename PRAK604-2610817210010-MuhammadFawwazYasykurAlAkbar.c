#include <stdio.h>
#include <string.h>

int main() {
    char code_text[200], message_text[200], result[200];

    if (fgets(code_text, sizeof(code_text), stdin) == NULL ||
        fgets(message_text, sizeof(message_text), stdin) == NULL) {
        return 0;
    }

    code_text[strcspn(code_text, "\n")] = '\0';
    message_text[strcspn(message_text, "\n")] = '\0';

    int star_count = 0, hash_count = 0;

    if (strlen(code_text) != strlen(message_text)) {
        printf("Panjang kalimat berbeda, pesan palsu\n");
        return 0;
    }

    for (int i = 0; code_text[i] != '\0'; i++) {
        if (code_text[i] == message_text[i]) {
            if (code_text[i] == ' ') {
                result[i] = ' ';
            } else {
                result[i] = '*';
                star_count++;
            }
        } else {
            result[i] = '#';
            hash_count++;
        }
    }
    result[strlen(code_text)] = '\0';

    printf("%s\n", result);
    printf("* = %d\n", star_count);
    printf("# = %d\n", hash_count);

    if (star_count >= hash_count) {
        printf("Pesan Asli\n");
    } else {
        printf("Pesan Palsu\n");
    }

    return 0;
}
