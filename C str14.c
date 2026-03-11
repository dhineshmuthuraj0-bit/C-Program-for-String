#include <stdio.h>

int main() {
    char str[100];
    int i,words=1;
    fgets(str,100,stdin);
    for(i=0; str[i] != '\0'; i++) {
        if(str[i] == ' ') {
            words++;
        }
    }
    printf("%d", words);
    return 0;
}
