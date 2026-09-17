#include <stdio.h>
#include <string.h>
#include <ctype.h>

int check_palindrome(char *);
int main()
{
    char sen[100];

    printf("Enter the sentence here: ");
    fgets(sen, sizeof(sen), stdin);
    sen[strcspn(sen, "\n")] = '\0';

    int pal = check_palindrome(sen);
    if (pal != 0) {
        printf("A palindrome");
    } else {
        printf("Not a palindrome");
    }

    return 0;
}

int check_palindrome(char *s)
{
        int i,j;
        for(i=0;s[i];i++);

        for(i=i-1,j=0;i>j;i--,j++)
                if(s[i]!=s[j])
                        return 0;
        if(s[i]==s[j])
                return 1;
}
