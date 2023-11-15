/* String concatenation and comparison functions. */
#include <stdio.h>

void concatenate(char* dest, const char* src) {
    while (*dest) dest++;
    while (*src) {
        *dest++ = *src++;
    }
    *dest = '\0';
}

int compare_strings(const char* str1, const char* str2) {
    while (*str1 && *str2) {
        if (*str1 != *str2) return -1;
        str1++;
        str2++;
    }
    return *str1;
}

int main() {
    char str1[20] = "Hello";
    char str2[] = " World";
    concatenate(str1, str2);
    printf("%s\n", str1);
    printf("Comparison: %d\n", compare_strings(str1, "Hello World"));
    return 0;
}