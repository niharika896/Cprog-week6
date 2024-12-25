#include <stdio.h>
#include <string.h>

void firstNonrep(char *str) {
    int i, j, found;
    for (i = 0; str[i] != '\0'; i++) {
        found = 0;
        for (j = 0; str[j] != '\0'; j++) {
            if (str[i] == str[j] && i != j) { 
                found = 1;
                break;
            }
        }
        if (!found) {
            printf("First non-repeating character is: %c\n", str[i]);
            return; 
        }
    }
    printf("No non-repeating character found.\n");
}

int main() {
    char str[256];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    

    firstNonrep(str);

    return 0;
}
