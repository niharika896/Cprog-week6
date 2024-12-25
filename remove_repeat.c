#include <stdio.h>
#include <string.h>
int main(){
	char str[100];
    fgets(str,sizeof(str),stdin);
    int n=strlen(str);
    for(int i=n-1;i>=1;i--){
        for(int j=i-1;j>=0;j--){
            if(str[i]==str[j]){
                int k;
                for(k=i;str[k]!='\0';k++)str[k]=str[k+1];
                str[k-1]='\0';
            }
        }
    }
    for(int i=0;str[i]!='\0';i++)printf("%c",str[i]);
	return 0;
}
