#include <stdio.h>
#include <string.h>
#include <ctype.h>

void anagram(char *str1, char *str2) {
    int ch1[26] = {0}, ch2[26] = {0};

    if (strlen(str1) != strlen(str2)) {
        printf("FALSE\n");
        return;
    }

    for (int i = 0; str1[i] != '\0'; i++) {
            ch1[str1[i] - 'a']++;
            ch2[str2[i] - 'a']++;
        };

    for (int i = 0; i < 26; i++) {
        if (ch1[i] != ch2[i]) {
            printf("FALSE\n");
            return;
        }
    }
    printf("TRUE\n");
}

int main() {
    char str1[100], str2[100];

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);

    anagram(str1, str2);
    return 0;
}
