#include <stdio.h>
#include <string.h>

void mapping(char *str1, char *str2) {
    int c1, c2;
    
    if (strlen(str1) != strlen(str2)) {
        printf("FALSE\n");
        return;
    }
    
    for (int i = 0; str1[i] != '\0' && str2[i] != '\0'; ) {
        c1 = 1;
        c2 = 1;
        for (int j = i; str1[j] != '\0' && str1[j] == str1[i]; j++) c1++;
        for (int j = i; str2[j] != '\0' && str2[j] == str2[i]; j++) c2++;
        
        if (c1 == c2) {
            i += c1;
        } else {
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

    mapping(str1, str2);
    return 0;
}
