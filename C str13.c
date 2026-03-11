#include <stdio.h>

int main() {
    char str[100], ch;
    int i, v = 0;
    scanf("%s", str);
    scanf(" %c", &ch);
    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] == ch) {
            printf("%d", i);
            v = 1;
            break;
        }
    }
    if(v== 0) {
        printf("-1");
    }
    return 0;
}
