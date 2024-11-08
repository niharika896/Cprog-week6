#include <stdio.h>
#include <string.h>

void removeRepeatedChars(char *str) {
	int i,j,c=0,k;
	for(i=0;str[i]!='\0';i++){
		for(j=i+1;str[j]!='\0';j++)
			if(str[i]==str[j])
                for (k = j; str[k] != '\0'; k++) {
                str[k] = str[k+ 1];
            }
            j--;
	};      
}

int main() {
    char str[256],i;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
	removeRepeatedChars(str);
    for(i=0;i<strlen(str);i++)
    if(str[i]!=';')printf("%c",str[i]);

    return 0;
}

