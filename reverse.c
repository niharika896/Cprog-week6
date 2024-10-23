#include <stdio.h>
#include <string.h>
int main(){
	int i,c=0;
	char ch[100],temp;
	printf("Enter a string:"); scanf("%[^\n]s",ch);
	for(i=0;ch[i]!='\0';i++)c++;
	for(i=0;i<c/2;i++){
		temp=ch[i];
		ch[i]=ch[c-i-1];
		ch[c-1-i]=temp;
	}
	printf("new string is %s",ch);
	return 0;
}
