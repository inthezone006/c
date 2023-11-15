#include <stdio.h>

#define mag(v) return v;

int test_func(int i) {
    mag(i);
}

int main() {
    int t = test_func(1);
    printf("%d", t);
    return 0;
}