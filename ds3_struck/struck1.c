#include <stdio.h>
#include <string.h>

struct kodeBRT {
    char kode[10];
};

typedef struct lagu
{
    char judul[15];
    char penyanyi[25];
    int tahun;
    int track;
    kodeBRT album;
} Lagu;

void main()
{
    Lagu song[3];
    printf("Judul lagu: ");
    fgets(song.judul_lagu, sizeof(song.judul_lagu), stdin);
    song.judul_lagu[strcspn(song.judul_lagu, "\n")] = 0;
    printf("Nama penyanyi: ");
    fgets(song.penyanyi, sizeof(song.judul_lagu), stdin);
    song.judul_lagu[strcspn(song.judul_lagu, "\n")] = 0;
}