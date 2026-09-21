#include <stdio.h>
#include <string.h>
typedef struct lagu
{
    char judul_lagu[15];
    char nama_penyanyi;
    int harga;
} Lagu;
void main()
{
    Lagu song;
    printf("Judul lagu: ");
    fgets(song.judul_lagu, sizeof(song.judul_lagu), stdin);
    song.judul_lagu[strcspn(song.judul_lagu, "\n")] = 0;
    printf("Hello World");
}