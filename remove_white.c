#include <stdio.h>
#include <string.h>

void removeWhitespace(char *str) {
    int i, j;
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            for (j = i; str[j] != '\0'; j++) {
                str[j] = str[j + 1];
            }
            i--;
        }
    }
}

int main() {
    char str[256];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    removeWhitespace(str);
    printf("String after removing whitespace: %s\n", str);

    return 0;
}
