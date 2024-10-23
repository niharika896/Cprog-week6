#include <stdio.h>

int main() {
    int i, e = 1;
    char ch[100], c;
    
    printf("Enter a string: ");
    scanf("%[^\n]s", ch);
    fflush(stdin);
    printf("Enter character: ");
    scanf("%c", &c);

    for (i = 0; ch[i] != '\0'; i++) {
        if (ch[i] == c) {
            printf("Character found at %d\n", i);
            e = 0;
        }
    }

    if (e) {
        printf("Not found\n");
    }

    return 0;
}

