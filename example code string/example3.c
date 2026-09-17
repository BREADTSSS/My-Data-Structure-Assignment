#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    char satu[30] = "Teknik Komputer Jaringan";
    char dua[30] = "Akademik Komunitas";

    strcat(satu, dua);
    printf("Hasil penggabungannya : % s \n", satu);
    printf("Jika diubah menjadi huruf kapital semua : \n");
    printf("%s", strupr(satu));
    printf("\n");
    printf("Jika diubah menjadi huruf kecil semua :\n");
    printf("%s", strlwr(satu));
    getch();
}