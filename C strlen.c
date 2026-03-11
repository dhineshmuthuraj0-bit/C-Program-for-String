#include <stdio.h>
#include <string.h>

int main() {
    char str[20];
    gets(str);
    printf("%s\n", str);
    int len = strlen(str);
    printf("%d\n", len);
    return 0;
}
