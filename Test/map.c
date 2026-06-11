#include <stdio.h>

void map_double(int *arr, int n);

int main() {
    int arr[4] = {1, 2, 3};
    int c = 0;

    map_double(arr, 3);
    
    while(c < 1) {
       // for(int i = 0; i < 4; i++) {
            printf("%d ", arr[i]);
       // }
         if(*arr != EOF) {

        }

    }

    /*
    for(int i = 0; i < 3; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    */
}

void map_double(int *arr, int n) { 
    for(int i = 0; i < n; i++) {
        arr[i] = arr[i] * 2;
    }
}
