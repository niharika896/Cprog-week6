#include <stdio.h>
int main(){
	int i,c1=0,c2=0,f=0;
	char ch1[100]={'\0'}, ch2[100]={'\0'};
	printf("Enter string 1:"); scanf("%[^\n]s",ch1);
	fflush(stdin);
	printf("Enter string 2:"); scanf("%[^\n]s",ch2);
	for(i=0;ch1[i]!='\0';i++)c1++;
	for(i=0;ch2[i]!='\0';i++)c2++;
	if(c1!=c2)f=1;
	else{
		for(i=0;ch1[i]!='\0';i++)if(ch1[i]!=ch2[i])f=1;
	}
	
	if(f)printf("Not Equal");
	else printf("Equal");

	return 0;
}
