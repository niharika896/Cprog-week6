#include <stdio.h>
#include <string.h>
#include <ctype.h>
void reverse(char *str){
	char temp;
	int i,j;
	int n=strlen(str);
	for(i=0;i<n;i++)
	if(isdigit(str[i])){
		printf("Invalid String");return;
	}
	for(i=0;i<n-1;i++){
		temp=str[i];
		str[i]=str[n-i-1];
		str[n-i-1]=temp;
	}
	printf("%s",str); return;
}

int main() {
    char string[100];
    printf("Enter a string: ");
    fgets(string, sizeof(string), stdin);
    string[strcspn(string, "\n")] = '\0';
	reverse(string);

    return 0;
}

