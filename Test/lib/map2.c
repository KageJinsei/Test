#include <stdio.h>

void map(int *arr, char op, int n);
int fn_s(int a, int b);

int main() {
    int n = 2;
    int v[3] = {1, 2, 3};

    map(v, 's', n);

    for(int i = 0; v[i]; i++)
        printf("\n%d", v[i]);

    putchar('\n');
}

void map(int *arr, char op, int n) {
    if(op == 's') {
        for(int i = 0; arr[i]; i++) {
            arr[i] = arr[i] + n;
        }
    }
}

int fn_s(int a, int b) {
    return a + b;     
}
