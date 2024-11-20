#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char ch[] = "hello the nice the day the.";
    int n = strlen(ch), count = 0;
    char t[] = "the";
    int m = strlen(t);

    for (int j = 0; j <= n - m; j++) {
        if (strncmp(&ch[j], t, m) == 0) {
            if ((j == 0 || isspace(ch[j - 1])) && 
                (ch[j + m] == '\0' || isspace(ch[j + m]) || ch[j + m] == '.')) {
                count++;
            }
        }
    }

    printf("%d\n", count);
    return 0;
}


// #include <stdio.h>
// #include <string.h>
// int main(){
//     char ch[]="ab";
//     printf("%d",ch[0]=='a');
//     return 0;
// }
