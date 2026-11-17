#include <stdio.h>
#include <string.h>

int main() {
    char description[300];

    fgets(description, sizeof(description), stdin);
    description[strcspn(description, "\n")] = '\0';

    if (strlen(description) > 20) {
        description[20] = '\0';
        printf("%s...\n", description);
    } else {
        printf("%s\n", description);
    }

    return 0;
}
