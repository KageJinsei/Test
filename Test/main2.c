#include <stdio.h>

void map_double(int *arr, int n);

int main() {
    int arr[3] = {1, 2, 3};

    map_double(arr, 3);

    for(int i = 0; i < 3; i++) {
        printf("%d\n", arr[i]);
    }
}

void map_double(int *arr, int n) { 
    for(int i = 0; i < n; i++) {
        arr[i] = arr[i] * 2;
    }
}
