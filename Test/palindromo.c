#include <stdio.h>
#include <string.h>

int main() {
    char s[5] = "anas";
    char z[5];
    for(int i = strlen(s) - 1; i > -1; i--) {
        for(int j = 0; j < strlen(z); j++) {
           z[j] = s[i]; 
        }
    }
    printf("%s\n", s);
    printf("%s\n", z);
}
