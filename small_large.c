#include <stdio.h>
#include <string.h>

void findWords(char str[], char smallest[], char largest[]) {
    int start = 0, end = 0, len = strlen(str),i;
    int minLength = len, maxLength = 0;

    for (i = 0; i <= len; i++) {
        if (str[i] == ' ' || str[i] == '\0') {
            int wordLength = i - start;
            if (wordLength > 0) {
                if (wordLength < minLength) {
                    minLength = wordLength;
                    strncpy(smallest, &str[start], wordLength);
                    smallest[wordLength] = '\0';
                }
                if (wordLength > maxLength) {
                    maxLength = wordLength;
                    strncpy(largest, &str[start], wordLength);
                    largest[wordLength] = '\0';
                }
            }
            start = i + 1;
        }
    }
}

int main() {
    char str[200]={'\0'};
    char smallest[200], largest[200];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    findWords(str, smallest, largest);

    printf("Smallest word: %s\n", smallest);
    printf("Largest word: %s\n", largest);

    return 0;
}

