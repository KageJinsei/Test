#include <stdio.h>
#include <string.h>

int main() {
    char *p = "ola";

    for(int i = strlen(p) - 1; i > -1; i--) {
        putchar(*(p+i));
    }
    putchar('\n');
}
