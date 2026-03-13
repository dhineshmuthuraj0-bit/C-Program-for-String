#include <stdio.h>
#include <string.h>

int main() {
        char s[1001];
        int upperCount = 0;
        int lowerCount = 0;
        if (fgets(s, sizeof(s), stdin)) {
            s[strcspn(s, "\n")] = 0;
            for (int i = 0; s[i] != '\0'; i++) {
                if (s[i] =='A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U') {
                    upperCount++;
                }
                else if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
                    lowerCount++;
                }
            }
            if (upperCount > lowerCount) {
                printf("More uppercase vowels\n");
            } else if (lowerCount > upperCount) {
                printf("More lowercase vowels\n");
            } else {
                printf("Equal number of vowels\n");
            }
        }
        return 0;
    }
