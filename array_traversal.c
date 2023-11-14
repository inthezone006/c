#include <stdio.h>

void traverse_arr(int *arr) {
    for (int i = 0; i < 10; i++) {
        printf("%d", arr[i]);
    }
}

int main() {
    int arr[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    int *ptr = arr;
    traverse_arr(ptr);    
}