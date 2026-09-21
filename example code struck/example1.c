#include <stdio.h>
#include <string.h>
#include <conio.h>
typedef struct buku
{
    char judul[15];
    int tahun_terbit;
    int harga;
} Buku;
void main()
{
    Buku book;
    printf("Judul buku : ");
    fgets(book.judul, sizeof(book.judul), stdin); // gunakan gets untuk judul buku lebih dari satu kata
    book.judul[strcspn(book.judul, "\n")] = 0;
    printf("Tahun terbit: ");
    scanf("%i", &book.tahun_terbit);
    printf("Harga : ");
    scanf("%i", &book.harga);
    printf("\nJudul buku : %s\n", book.judul);
    printf("Tahun terbit : %i\n", book.tahun_terbit);
    printf("Harga : %i", book.harga);
}