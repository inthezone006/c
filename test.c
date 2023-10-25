#include <stdio.h>

int main() {
    int x = 7;
    int* pX = &x;
    x++;
    printf("%d\n", *pX);
    printf("%d\n", x);
}