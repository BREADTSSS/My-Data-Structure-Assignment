#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
    char string1[5], string2[5];
    int hasil;

    printf("Masukkan string 1 :");
    scanf("%s", &string1);
    printf("Masukkan string 2 :");
    scanf("%s", &string2);
    hasil = strcmp(string1, string2);

    if (hasil > 0)
        printf("%s > %s", string1, string2);
    else if (hasil == 0)
        printf("%s = %s", string1, string2);
    else
        printf("%s < %s", string1, string2);
    getch();
}