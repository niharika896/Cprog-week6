#include <stdio.h>
#include <string.h>
#include <ctype.h>

void frequency(char *str,int  *chl,int *chu,int sp) {

    for(int i=0;str[i]!='\0';i++){
        if(isupper(str[i]))chu[str[i]-65]++;
        else if(islower(str[i]))chl[str[i]-97]++;
        else sp++;
    };
}

int main() {
    char str[200];
    int chl[26]={0};
    int chu[26]={0};
    int sp;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    frequency(str,chl,chu,sp);
    for(int i=0;i<26;i++){
        if(chl[i])printf("'%c': %d\n",i+97,chl[i]);
        if(chu[i])printf("'%c': %d\n",i+65,chu[i]);
    };
    if(sp) printf("' ': %d",sp);
    return 0;
}
