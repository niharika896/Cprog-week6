#include <stdio.h>
#include <string.h>
#include <ctype.h>

void panagram(char *str) {
    int ch[26]={0};
    for(int i=0;str[i]!='\0';i++)str[i]=tolower(str[i]);
    for(int i=0;str[i]!='\0';i++){
        ch[str[i]-97]++;
    };
    for(int i=0;i<26;i++) 
    if(ch[i]==0){
        printf("not a panagram");
        return;
    }
    printf("Is a panagram");
}

int main() {
    char str[200];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    panagram(str);
    return 0;
}
