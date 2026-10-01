#include <stdio.h>

int main() {
    char a = 5;
    printf("\t%d\n", a&1);
    // 0101 & 0001 = 0001
    printf("\t%d\n", a&2);
    // 0101 & 0010 = 0000
    printf("\t%d\n", a|2);
    // 0101 | 0010 = 0111
    return 0;
}
