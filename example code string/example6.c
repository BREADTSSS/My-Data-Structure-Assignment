#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
    char *str1 = "Boa", *str2 = "Salosa", *str3, *str4;
    char *posisi, huruf = 'a';
    int panjang, hasil;
    printf("Nilai dari str1 : %s\n", str1);
    printf("Nilai dari str2 : %s\n", str2);
    panjang = strlen(str1);
    printf("\nPanjang string str1 : %d\n", panjang);
    getch();
    strcpy(str3, str1);
    printf("\nNilai dari str3 hasil copy dari str1 : %s\n", str3);
    getch();
    hasil = strcmp(str1, str2);
    printf("\nHasil perbandingan %s vs %s : %d artinya\n", str1, str2, hasil);
    if (hasil == 0)
        printf("Kedua string tersebut sama\n");
    else if (hasil > 0)
        printf("String %s lebih panjang string %s \n", str1, str2);
    else
        printf("String %s lebih pendek dari string %s \n", str1, str2);
    getch();
    posisi = strchr(str1, huruf);
    if (posisi)
        printf("\nhuruf %c berada pada posisi %d di kata%s\n", huruf, posisi - str1, str1);
    else
        printf("\nHuruf %c Tidak ditemukan kata %s\n", huruf, str1);
    getch();
    posisi = strstr(str1, str2);
    if (posisi)
        printf("\nString %s berada pada posisi %d pada kata %s\n", str2, posisi - str1, str1);
    else
        printf("\nString %s Tidak ditemukan pada kata %s\n", str2, str1);
    getch();
    strcpy(str4, str1);
    printf("\nKata %s di-Upper-kan jadi %s \n", str1, strupr(str4));
    getch();
    strcpy(str4, str2);
    printf("\nKata %s di-Lower-kan jadi %s \n", str2, strlwr(str4));
    getch();
}