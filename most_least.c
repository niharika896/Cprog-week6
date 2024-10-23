#include <stdio.h>
#include <string.h>

int main() {
    int i, max = 0, min = 100;
    char ch[100], b[27] = {0};
    
    printf("Enter a string: ");
    scanf(" %[^\n]s", ch);
    for (i = 0; ch[i] != '\0'; i++) {
        b[ch[i] - 'a']++;
    }
    
    for (i = 0; i < 26; i++) {
        if (b[i] > max) {
            max = b[i];
        }
        if (b[i] < min && b[i] > 0) {
            min = b[i];
        }
    }
    
    printf("Char most repeated is: ");
    for (i = 0; i < 26; i++) {
        if (b[i] == max) {
            printf("%c ", i + 97);
        }
    }
    printf("\n");
    printf("Char least repeated is: ");
    for (i = 0; i < 26; i++) {
        if (b[i] == min) {
            printf("%c ", i + 97);
        }
    }
    
    return 0;
}

