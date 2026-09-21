/* File program zodiak.c
Menentukan zodiak berdasarkan data tanggal lahir masukan */
#include <stdio.h>
void main()
{
    struct zodiak
    {
        char nama[11];
        int tgl_awal;
        int bln_awal;
        int tgl_akhir;
        int bln_akhir;
    };
    struct zodiak bintang = {"Sagitarius", 22, 11, 21, 12};
    int tgl_lhr, bln_lhr, thn_lhr;
    printf("Masukkan tgl lahir Anda (XX-XX-XXXX) ");
    scanf("%d-%d-%d", &tgl_lhr, &bln_lhr, &thn_lhr);
    if (tgl_lhr - bintang.tgl_awal + (bln_lhr - bintang.bln_awal) * 30 > 0 &&
        bintang.tgl_akhir - bintang.tgl_awal + (bintang.bln_akhir - bintang.bln_awal) * 30)
        printf("Bintang Anda adalah %s\n", bintang.nama);
    else
        printf("Bintang Anda bukan %s\n", bintang.nama);
}