#include <stdio.h>

int add_func(int a, int b) {
    return a + b;
}

int main() {
    int (*fun_ptr)(int, int) = &add_func;
    printf("%d\n", fun_ptr(10, 20));
    return 0;
}
