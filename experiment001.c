#include <stdio.h>

int main() {
    int rows = 5;

    // Ascending triangle (increasing stars)
    printf("Ascending Star Pattern:\n");
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Descending triangle (decreasing stars)
    printf("\nDescending Star Pattern:\n");
    for (int i = rows; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
