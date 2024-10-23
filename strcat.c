#include <stdio.h>
int main(){
	int i,c=0;
	char ch1[100]={'\0'}, ch2[100]={'\0'};
	printf("Enter string 1:"); scanf("%[^\n]s",ch1);
	fflush(stdin);
	printf("Enter string 2:"); scanf("%[^\n]s",ch2);
	for(i=0;ch1[i]!='\0';i++)c++;
	for(i=0;ch2[i]!='\0';i++)ch1[c+i]=ch2[i];
	for(i=0;ch1[i]!='\0';i++)printf("%c",ch1[i]);
	return 0;
}
