#include <stdio.h>

int filtrar_pares(int *arr, int n, int *out);

int main() {
    int arr[6] = {1, 2, 3, 4, 5, 6}, out[3];

    filtrar_pares(arr, 6, out);

    for(int i = 0; i < 3; i++) {
        printf("%d\n", out[i]);
    }
    return 0;
}

int filtrar_pares(int *arr, int n, int *out) {
    int t[6], i, j, c;

    for(i = 0; i < n; i++) {
        if(arr[i] % 2 == 0) {
            c = arr[i];
            t[i] = c;
        }
    }
    out[0] = t[0];
    out[1] = t[1];
    out[2] = t[2];
}


       /* 
        if(arr[i] % 2 == 0) {
            t = arr[i];
           *out = t;
        }*/
