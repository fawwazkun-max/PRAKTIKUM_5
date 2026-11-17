#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char word[100];
    int word_length, is_palindrome = 1;

    fgets(word, sizeof(word), stdin);
    word[strcspn(word, "\n")] = '\0';
    word_length = strlen(word);

    for (int i = 0; i < word_length; i++) {
        word[i] = (char)tolower((unsigned char)word[i]);
    }

    for (int i = 0; i < word_length / 2; i++) {
        if (word[i] != word[word_length - 1 - i]) {
            is_palindrome = 0;
            break;
        }
    }

    if (is_palindrome) {
        printf("Kata '%s' adalah palindrom\n", word);
    } else {
        printf("Kata '%s' bukan palindrom\n", word);
    }

    return 0;
}
