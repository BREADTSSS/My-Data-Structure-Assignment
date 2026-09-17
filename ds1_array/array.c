#include <stdio.h>

int main() {
    //Array A dan B
    int A[5] = {5, 10, 6, 0, 4};
    int B[5];
    
    // Menyalin isi array A ke array B
    for(int i = 0; i < 5; i++) {
        B[i] = A[i];
    }
    
    // Menampilkan hasil
    printf("Array A: ");
    for(int i = 0; i < 5; i++) {
        printf("%d ", A[i]);
    }
    
    printf("\nArray B: ");
    for(int i = 0; i < 5; i++) {
        printf("%d ", B[i]);
    }
    
    return 0;
}