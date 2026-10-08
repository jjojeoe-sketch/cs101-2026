#include <stdio.h>

int main() {
    int i = 1119;
    if (i <= 30) {
        printf("免費");
    }
    else {
        int n = 1 - 1500;
        if (n%100) {
            int h = ((n/100)+1) * 10;
            printf("%d 元", i);
        }
        else {
            printf("%d 元", 70 + (n/100) * 10);
        }
    }
    return 0;
}
