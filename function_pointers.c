#include <stdio.h>

int add(int x, int y) {
    return x + y;
}

int main() {
    int (*fptr) (int, int) = &add;
    printf("%d", fptr(3, 2));
}