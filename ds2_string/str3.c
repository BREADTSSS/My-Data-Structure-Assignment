#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define size 100

void ToUp(char *);
int main()
{
    char name[size];

    printf("Enter your name: ");
    scanf("%s", &name);

    ToUp(name);
    name[strcspn(name, "\n")] = '\0';
    int len = strlen(name);
    for (int i = 0; i != len; ++i)
    {
        putchar(name[len - i - 1]);
    }

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