#include <stdio.h>
#include <string.h>
#include <ctype.h>


void checkValid(int *p){
	if(*p%2==0)*p=1;
	else *p=0;
}

void validString(char str[]) {
	int i,r,c,a,b;
    int n = strlen(str);
    for (i = 0; i < n-1; i++) {
            if(str[i]=='{' ||str[i]=='}')c++;
            else if(str[i]=='('||str[i]==')')r++;
            else if(str[i]=='<'||str[i]=='>')a++;
            else if(str[i]=='[' ||str[i]==']')b++;
        };
    checkValid(&r); checkValid(&c);checkValid(&a);checkValid(&b);
    if(r && c&& a&&b)printf("Valid String");
    else printf("Invalid String");
}

    

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    validString(str);

    return 0;
}

