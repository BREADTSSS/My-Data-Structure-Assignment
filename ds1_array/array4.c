#include <stdio.h>

int main() {
    // Data Nama Mahasiswa
    char nama[4][20] = {"Ruslan", "Efraim", "Johanes", "Musyawir"};
    
    // Data Nilai: [Baris][Kolom]
    // Kolom 0: Alpro, Kolom 1: B.Data, Kolom 2: Web
    int nilai[4][3] = {
        {81, 90, 62}, // Ruslan
        {50, 83, 87}, // Efraim
        {89, 55, 65}, // Johanes
        {77, 70, 92}  // Musyawir
    };
    
    float rata_rata;
    
    // Tampilan Header
    printf("No. Mhs\tNama\t\tRata-rata\n");
    printf("------------------------------------\n");
    
    // Proses menghitung dan menampilkan
    for(int i = 0; i < 4; i++) {
        int total = 0;
        
        // Loop untuk menjumlahkan 3 kolom nilai (Alpro, B.Data, Web)
        for(int j = 0; j < 3; j++) {
            total += nilai[i][j];
        }
        
        // Hitung rata-rata
        rata_rata = (float)total / 3;
        
        // Output: No (i+1), Nama, dan Rata-rata (2 desimal)
        // \t digunakan untuk tabulasi agar rapi
        printf("%d\t%-20s%.2f\n", i + 1, nama[i], rata_rata);
    }
    
    printf("------------------------------------\n");
    
    return 0;
}