#include <stdio.h>
#include <conio.h>
#include <ctype.h>

int main()
{
    char karakter;
    printf("Masukkan sebuah karakter : ");
    karakter = getche();
    if (isupper(karakter)) // periksa apakah “karakter” adalah huruf kapital
        {
            puts(" adalah huruf besar");
            printf("Huruf kecilnya adalah : % c", tolower(karakter));
        }
    else if (islower(karakter)) // periksa huruf kecil
    {
        puts(" adalah huruf kecil");
        printf("Huruf besarnya adalah : % c", toupper(karakter));
    }
    else if (isdigit(karakter)) // periksa adalah digit
        puts(" adalah karakter digit");
    else
        puts(" bukan huruf besar, huruf kecil atau digit");
    getch();
}
