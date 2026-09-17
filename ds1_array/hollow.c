#include <stdio.h>

int main()
{
    int a, b, result, operator;

    //This is where you input first number
    printf("Input your first number: ");
    scanf("%d", &a);

    //This is where you input first number
    printf("Input your first number: ");
    scanf("%d", &b);

    //This is where you choose what kind of operation you want to do
    printf("1. add, 2. subtrack, 3. multiply, 4. divide  \n");
    printf("What's operation you want to do? ");
    scanf("%d", &operator);

    //This is a function for calculating the number
    if (operator == 1) // This is for addition
    {
        result = a + b;
        printf("The result is %d", result);
    } else if (operator == 2) // This is for subtraction
    {
        result = a - b;
        printf("The result is %d", result);
    } else if (operator == 3) // This is for multiplication
    {
        result = a * b;
        printf("The result is %d", result);
    } else if (operator == 4) // This is for division
    {
        result = a / b;
        printf("The result is %d", result);
    } else // This is show if you choose unknown operators
    {
        printf("OPERATOR'S NOT FOUND");
    }


    return 0;
}