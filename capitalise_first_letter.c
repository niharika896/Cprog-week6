#include <stdio.h>
#include <string.h>
int main(){
	int i;
	char ch[100];
	printf("Enter a string:"); scanf("%[^\n]s",ch);
	if(ch[0]>=97 && ch[0]<=122)ch[0]-=32;
	for(i=1;ch[i]!='\0';i++)if(ch[i]==' ' && ch[i+1]>=97 && ch[i+1]<=122)ch[i+1]-=32;
	printf("new string is: %s",ch);
	return 0;
}
