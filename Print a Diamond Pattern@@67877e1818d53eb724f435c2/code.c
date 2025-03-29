#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        // Print spaces
        for (int j = 1; j <= n - i - 1; j++) {
            printf(" ");
        }
        // Print stars
        for (int k = 1; k <= 2 * i + 1; k++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
