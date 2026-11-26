#include <stdio.h>

int main() {
    int var[5] = {1, 2, 3, 4, 5};
    int* ip;
    ip = &var[2];

    printf("&var[2] = %p\n", &var[2]);
    printf("ip = %p\n", ip);
    printf("*ip = %d\n", *ip);
    printf("*(ip+1) = %d\n", *(ip + 1));
    printf("*(ip-1) = %d\n", *(ip - 1));
    return 0;
}
