#include <stdio.h>
#include <string.h>

int lengthOfLastWord(char *sentence) {
    int length = 0;
    int n = strlen(sentence);
    
    if (n == 0) {
        return -1;
    }

    int i = n - 1;
    while (i >= 0 && sentence[i] == ' ') {
        i--;
    }
    while (i >= 0 && sentence[i] != ' ') {
        length++;
        i--;
    }

    return length;
}

int main() {
    char sentence[100];
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    sentence[strcspn(sentence, "\n")] = '\0';

    int result = lengthOfLastWord(sentence);
    
    if (result == -1) {
        printf("-1\n"); 
    } else {
        printf("Length of Last word: %d\n", result);
    }

    return 0;
}

