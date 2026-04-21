#include <stdio.h>

// int add(int num1, int num2)
// {
//     return num1 + num2;
// }

void add(int num1, int num2)
{
    printf("Result = %i \n", num1 + num2);
}

void main()
{
    // int x = 5 + 7;
    // int x = add(5, 7);

    // printf("Result = %i \n", x);

    add(5, 7);
}