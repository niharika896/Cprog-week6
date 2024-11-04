#include <stdio.h>
#include <string.h>

void deleteVowels(char str[]) {
	int i;
    int n = strlen(str);
    for (i = 0; i < n-1; i++) {
            if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')str[i]='\0';
        };
        
    for(i=0;i<n-1;i++){
    	if(str[i]!='\0')printf("%c",str[i]);
	};
    };
    
    

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    deleteVowels(str);

    return 0;
}

