#include <stddef.h>
#include <stdbool.h>
#include <string.h>
#include <stdio.h>

void swap(void *x, void *y, size_t n_bytes) {
    char tmp[n_bytes];
    memcpy(tmp, x, n_bytes);
    memcpy(x, y, n_bytes);
    memcpy(y, tmp, n_bytes);
}

void bubble_sort(int* arr, size_t n){
    while(true){
        bool swapped = false;
        for (size_t i = 1; i < n; i++) {
            if (arr[i-1] > arr[i]) {
                swap(&arr[i-1], &arr[i], sizeof(int));
                swapped = true;
            }
        }
        if (!swapped) {
            return;
        }
    }
}

int main() {
    int list_of_integers[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    bubble_sort(list_of_integers, 10);
    for(int i = 0; i < 10; i++) {
        printf("%d\n", list_of_integers[i]);
    }
}