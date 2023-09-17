#include <stdio.h>

int main() {
    int n;
    
    do {
        scanf("%d", &n);
    } while (n <= 0);

    for (int row = 1; row <= 2 * n - 1; row++) {
        for (int col = 1; col <= 2 * n - 1; col++) {
            
            int minDist = row < col ? row : col;
            minDist = minDist < 2 * n - row ? minDist : 2 * n - row;
            minDist = minDist < 2 * n - col ? minDist : 2 * n - col;

            int value = n - minDist + 1;
            printf("%d ", value);
        }
        printf("\n");
    }

    return 0;
}
