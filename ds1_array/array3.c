#include <stdio.h>

int main() {
    int n, temp;
    
    // 1. Input Jumlah Data
    printf("Jumlah data = ");
    scanf("%d", &n);
    
    int data[n]; // Array dinamis sesuai jumlah input
    
    // 2. Input Data ke-1 s/d ke-n
    for(int i = 0; i < n; i++) {
        printf("Data ke-%d = ", i + 1);
        scanf("%d", &data[i]);
    }
    
    // 3. Proses Pengurutan (Ascending)
    // Logika: Bandingkan pasangan elemen, geser (swap) jika kiri > kanan
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(data[j] > data[j+1]) {
                // Geser/Swap nilai
                temp = data[j];
                data[j] = data[j+1];
                data[j+1] = temp;
            }
        }
    }
    
    // 4. Output Data Terurut
    printf("\nData terurut naik:\n");
    for(int i = 0; i < n; i++) {
        printf("Data ke-%d = %d\n", i + 1, data[i]);
    }
    
    return 0;
}