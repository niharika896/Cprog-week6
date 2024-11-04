#include <stdio.h>
#include <string.h>

void removeRepeatedChars(char *str,int n) {
	int i,j;
	for(i=0;i<n;i++){
		if(*(str+i)!='\0')
		for(j=i+1;j<n;j++)
			if(*(str+i)==*(str+j))*(str+i)=*(str+j)=';';
	};
	 
}

int main() {
    char str[256],i;
    int n;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    n=strlen(str);
	removeRepeatedChars(str,n);
    for(i=0;i<strlen(str);i++)
    if(str[i]!=';')printf("%c",str[i]);

    return 0;
}

