#include <stdio.h>
#include <string.h>
int main(){
	int i;
	char ch[100];
	printf("Enter an uppercase string:"); scanf("%[^\n]s",ch);
	for(i=0;ch[i]!='\0';i++)if(ch[i]>=65 && ch[i]<=90)ch[i]+=32;
	printf("new string is %s",ch);
	return 0;
}
