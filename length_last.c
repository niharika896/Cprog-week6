#include <stdio.h>
#include <string.h>

int lengthOfLastWord(char *sentence) {
    int length = 0;
    int n = strlen(sentence);

    // If the string is empty, return -1
    if (n == 0) {
        return -1;
    }

    // Skip any trailing spaces at the end of the string
    int i = n - 1;
    while (i >= 0 && sentence[i] == ' ') {
        i--;
    }

    // Now, count the length of the last word
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

    // Remove the newline character if fgets captures it
    sentence[strcspn(sentence, "\n")] = '\0';

    int result = lengthOfLastWord(sentence);
    
    if (result == -1) {
        printf("-1\n");  // If the sentence is empty, return -1
    } else {
        printf("Length of Last word: %d\n", result);
    }

    return 0;
}

