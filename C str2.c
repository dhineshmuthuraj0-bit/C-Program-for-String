#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {

    char password[100];
    fgets(password, 100, stdin);
    size_t len = strlen(password);
    if (password[len-1] == '\n') {
        password[len-1] = '\0';
    }
        int hasUppercase = 0;
        for (int i = 0; password[i] != '\0'; i++) {
            if (isupper(password[i])) {
                hasUppercase = 1;
                break;
            }
        }

        if (hasUppercase)
            printf("Valid\n");
        else
            printf("Invalid\n");

        return 0;
    }
