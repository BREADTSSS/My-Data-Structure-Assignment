#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char word[100];
    int i, spaces = 0;

    printf("Enter a sentence here: ");
    fgets(word, sizeof(word), stdin);
    word[strcspn(word, "\n")] = '\0';

    for (i = 0; word[i] != '\0'; i++)
    {
        if (word[i] == ' ')
        {
            spaces++;
        }
    }

    printf("The number of space: %d", spaces);
    return 0;
}