#include <stdio.h>

int main() {
    int A[10], max, min, sum = 0;
    
    // 1. Input & Proses sekaligus (Lebih Efisien)
    printf("Masukkan 10 bilangan:\n");
    for(int i = 0; i < 10; i++) {
        printf("Angka %d: ", i + 1);
        scanf("%d", &A[i]);
        
        // Inisialisasi max/min pada angka pertama
        if(i == 0) {
            max = A[0];
            min = A[0];
        }
        
        // Cek Max, Min, dan Hitung Sum dalam satu loop
        if(A[i] > max) max = A[i];
        if(A[i] < min) min = A[i];
        sum += A[i];
    }
    
    // 2. Output Hasil
    printf("\n--- Hasil ---\n");
    printf("Terbesar : %d\n", max);
    printf("Terkecil : %d\n", min);
    printf("Rata-rata: %.2f\n", (float)sum / 10);
    
    return 0;
}