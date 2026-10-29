#include <stdio.h>
void TowerOfHanoi(int n, char from_rod, char to_rod, char aux_rod) {
    if (n == 1 ) {
        printf("\nMove disk 1 from rod %c to %c", from_rod, to_rod);
        return;
    }
    TowerOfHanoi(n-1, from_rod, aux_rod, to_rod);
    printf("\nMove disk %d from rod %c to %c", n,from_rod, to_rod);
    TowerOfHanoi(n-1, aux_rod, to_rod, from_rod);
}

int main() {
    int n = 3;
    TowerOfHanoi(n, 'A', 'B', 'C');
    return 0;
}
