#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char sentence[200];
    int vowel_count = 0, consonant_count = 0;

    printf("Kalimat : ");
    fgets(sentence, sizeof(sentence), stdin);
    sentence[strcspn(sentence, "\n")] = '\0';

    for (int i = 0; sentence[i] != '\0'; i++) {
        char letter = (char)tolower((unsigned char)sentence[i]);

        if (letter == 'a' || letter == 'i' || letter == 'u' || letter == 'e' || letter == 'o') {
            vowel_count++;
        } else if (isalpha((unsigned char)letter)) {
            consonant_count++;
        }
    }

    printf("Jumlah Vokal : %d\n", vowel_count);
    printf("Jumlah Konsonan : %d\n", consonant_count);

    return 0;
}
