#include <stdio.h>
#include <string.h>

int main()
{
    char word[1000];
    int upper = 0, lower = 0, i;

    printf("Enter something: ");
    fgets(word, sizeof(word), stdin);

    i = 0;

    while (word[i] != '\0')
    {
        if (word[i] >= 'A' && word[i] <= 'Z')
            upper++;
        if (word[i] >= 'a' && word[i] <= 'z')
            lower++;
        i++;
    }

    printf("The uppercase character: %d \nThe lowercase character: %d \n", upper, lower);
    printf(word);
}