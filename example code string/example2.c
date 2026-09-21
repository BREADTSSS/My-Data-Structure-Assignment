#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    char nama[25];
    
    strcpy(nama, "Leonardo Di Caprio");
    printf("Nama : %s \n", nama);
    printf("Banyaknya karakter nama Anda adalah : %i", strlen(nama));
    getch();
}
