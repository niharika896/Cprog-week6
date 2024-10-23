#include <stdio.h>
#include <string.h>
int main(){
	int i,p,l;
	char ch[100],c;
	printf("Enter a string:"); scanf("%[^\n]s",ch);
	fflush(stdin);
	printf("Enter position:");scanf("%d",&p);
	fflush(stdin);
	printf("Enter character:");scanf("%c",&c);
	for(i=0;ch[i]!='\0';i++)l++;
	for(i=l;i>p-1;i--)ch[i]=ch[i-1];
	ch[p]=c;
	printf("New string is %s",ch);
	return 0;
}
