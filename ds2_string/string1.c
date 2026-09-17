#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>

void ToLow(char *);
int main()
{
    char string[] = "BELAJAR LOGIKA PEMROGRAMAN \nBAHASA C \n";

    ToLow(string);
    printf("%s", string);
    getch();

    return 0;
}

void ToLow(char *p)
{
    while (*p)
    {
        *p = tolower(*p);
        p++;
    }
}