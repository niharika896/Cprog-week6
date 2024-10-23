#include <stdio.h>
#include <string.h>
int main(){
	int i,c=0;
	char ch[100],f=0;
	printf("Enter a string:"); scanf("%[^\n]s",ch);
	for(i=0;ch[i]!='\0';i++)c++;
	for(i=0;i<c/2;i++){
		if(ch[i]!=ch[c-i-1])f=1;
	}
	if(f)printf("Not a Palindrome");
	else printf("Is a palindrome");
	return 0;
}
