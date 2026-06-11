#include <stdio.h>
//#include <stdlib.h>

int filtrar_pares(int *arr, int n, int *out);

int main() {
    int arr[6] = {1, 2, 3, 4, 5, 6}, out[6];

    //int *out = malloc(sizeof(int));

    filtrar_pares(arr, 6, out);

    for(int i = 0; i < 6; i++) {
        if(out[i] != 0)
            printf("%d\n", out[i]);
    }
    //free(out);
    return 0;
}

int filtrar_pares(int *arr, int n, int *out) {

    for(int i = 0; i < n; i++) {
        if(arr[i] % 2 == 0) {
            out[i] = arr[i];   
        }
        else {
            out[i] = 0;
        }
    }
    return *out;
}
