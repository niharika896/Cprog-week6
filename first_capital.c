#include <stdio.h>
#include <ctype.h>
char findCapital(const char *str) {
    while (*str) {
        if (isupper(*str)) {
            return *str;
        }
        str++;
    }
    return '\0';
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    char capitalLetter = findCapital(str);

    if (capitalLetter) {
        printf("The first capital letter is: %c\n", capitalLetter);
    } else {
        printf("No capital letter found in the string.\n");
    }

    return 0;
}

