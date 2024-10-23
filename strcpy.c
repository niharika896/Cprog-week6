#include <stdio.h>
int main(){
	int i;
	char ch1[100], ch2[100];
	printf("Enter string 1:"); scanf("%[^\n]s",ch1);
	for(i=0;ch1[i]!='\0';i++)ch2[i]=ch1[i];
	for(i=0;ch2[i]!='\0';i++)printf("%c",ch2[i]);
	return 0;
}
