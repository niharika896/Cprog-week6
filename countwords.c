#include <stdio.h>
#include <string.h>
#include <ctype.h>

void countWords(char str[]) {
	int i,count=1;
    int n = strlen(str);
    for (i = 0; i < n-1; i++) {
            if(isspace(str[i]) && isalnum(str[i+1]) )count++;
        };
    if(count==1)count=0;
    printf("No of words= %d",count);
}
    

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    countWords(str);

    return 0;
}

