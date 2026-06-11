#include <stdio.h>

int soma(int *arr, int n);

int main() {
    int arr[5] = {1, 2, 3, 5, 6};
    int v;
    
    v = soma(arr, 5);

    printf("%d\n", v);

    return 0;
}

int soma(int *arr, int n) {
    int s = 0;

    for(int i = 0; i < n; i++) {
        s += arr[i];
    }  
    return s;
}
