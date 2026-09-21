#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
    struct data_tanggal
    { // definisi tipe data_tunggal
        int tanggal;
        int bulan;
        int tahun;
    };
    struct data_rekan // definisi tipe data_rekan
    {
        char nama[31];
        struct data_tanggal tgl_lahir;
    };
    struct data_rekan info_rekan; // deklarasi variabel
    strcpy(info_rekan.nama, "Boa Salosa");
    info_rekan.tgl_lahir.tanggal = 15;
    info_rekan.tgl_lahir.bulan = 5;
    info_rekan.tgl_lahir.tahun = 1985;
    // penampilan elemen variabel struktur
    printf("Nama : %s\n", info_rekan.nama);
    printf("Tanggal lahir : %d-%d-%d\n",
           info_rekan.tgl_lahir.tanggal,
           info_rekan.tgl_lahir.bulan,
           info_rekan.tgl_lahir.tahun);
}
