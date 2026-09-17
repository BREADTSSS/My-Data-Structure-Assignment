// Source - https://stackoverflow.com/q/78047212
// Posted by PLC_Guy, modified by community. See post 'Timeline' for change history
// Retrieved 2026-09-13, License - CC BY-SA 4.0

#include <stdio.h>
#include <stdlib.h>

#define  SIZE 7

int main()
{
    int strSize;
    char tim[SIZE];
    printf("Enter the time (format xx:yy)= ");
    // for example when I type 14:45
    gets(tim); 
    int i;
    for (i=0; tim[i] != '\0'; i++)
    {
        strSize=i;
    }
    
    // result of program turns as 5.
    printf("%d", strSize);
    return 0;     
}   
