#include <stdio.h>
int main(){
	int i,c=0;
	char ch[100];
	printf("Enter a string:"); scanf("%[^\n]s",ch);
	for(i=0;ch[i]!='\0';i++)c++;
	printf("Lenth is %d",c);
	return 0;
}
