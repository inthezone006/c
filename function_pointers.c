#include <stdio.h>

int add(int x, int y) {
    return x + y;
}

int func(int x, int y, int(*f)(int, int)) {
    return f(x, y);
} 

int main() {
    int (*fptr) (int, int) = add;
    printf("%d\n", fptr(3, 2));
    printf("%d", func(3, 2, add));
}