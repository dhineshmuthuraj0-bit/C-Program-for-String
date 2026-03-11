#include <stdio.h>

int main() {
    char str[100];
    int i,count=0;
    scanf("%s", str);
    for(i=0; str[i] != '\0'; i++) {
        if(str[i] =='@' || str[i] =='#' || str[i] =='$' || str[i] =='%' || str[i] =='&') {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}
