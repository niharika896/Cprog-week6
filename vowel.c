#include <stdio.h>
int main(){
	int i;
	char ch[100];
	printf("Enter a string:"); scanf("%[^\n]s",ch);
	for(i=0;ch[i]!='\0';i++)if(ch[i]=='a'||ch[i]=='e'||ch[i]=='i'||ch[i]=='o'||ch[i]=='u')printf("%c",ch[i]);
	return 0;
}
