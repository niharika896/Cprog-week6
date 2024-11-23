#include <stdio.h>
#include <string.h>
int main(){
    int count=0;
    char t[]="the";
    char sen[100];
    fgets(sen,sizeof(sen),stdin);
    for(int i=0;sen[i]!='\0';i++){
        int found=1;
        for(int j=0;j<3;j++){
            if(sen[i+j]!=t[j])found=0;
        }
        if(found) if(sen[i+3]==' '||sen[i+3]=='.')
        count++;
    }
    printf("%d",count);
    return 0;
}
