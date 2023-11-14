#include <stdio.h>
#include <stddef.h>
#include <stdbool.h>
#include <string.h>

void trav(void *ptr, size_t elem_size, int num_elem) {
    for (size_t i = 0; i < num_elem; i++) {
        printf("%d", *((int*)((char*)ptr + i * elem_size)));
    }
}

int main() {
    int arr[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    int *ptr = arr;
    trav(ptr, sizeof(int), 10);
}