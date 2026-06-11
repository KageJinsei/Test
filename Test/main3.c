#include <stdio.h>

void soma_vetores(int *a, int *b, int *out, int n);

int main() {
    int a[3] = {1, 2, 3}, b[3] = {2, 4, 6}, out[3];

    soma_vetores(a, b, out, 3);

    for(int i = 0; i < 3; i++) {
        printf("%d\n", out[i]);
    }
}

void soma_vetores(int *a, int *b, int *out, int n) {
    for(int i = 0; i < n; i++) {
        out[i] = a[i] + b[i];
    }
}
