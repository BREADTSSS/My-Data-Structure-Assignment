#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>

void ToUp(char *);
void ToLow(char *);
int main()
{
    char satu[] = "Teknik Komputer dan Jaringan";
    char dua[] = "Akademik Komunitas";

    printf("Jika diubah menjadi huruf kapital semua \n");
    ToUp(satu);
    printf("%s", satu);
    printf("\n");
    printf("Jika diubah menjadi huruf kecil semua \n");
    ToUp(dua);
    printf("%s", dua);
    printf("\n");
    getch();

    return 0;
}

void ToUp(char *p)
{
    while (*p)
    {
        *p = toupper(*p);
        p++;
    }
}

void ToLow(char *p)
{
    while (*p)
    {
        *p = tolower(*p);
        p++;
    }
}