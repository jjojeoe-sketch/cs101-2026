#include <stdio.h>
int multi(int i, int j) {
    if (j == 1) {
        printf("%d*%d=%d\n", i, j, i*j);
        return 0;
    } else{
        multi(i, j-1);
        printf("%d*%d=%d\n", i, j, i*j);
    }
}

int main() {
    multi(1, 9);
    return 0;
}
