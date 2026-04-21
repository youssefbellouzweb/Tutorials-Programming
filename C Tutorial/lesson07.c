#include<stdio.h>

void main() {
    int x = 0;

    while (x < 3)
    {
        printf("count %i\n", x);
        x++;
    }
    printf("===================================\n");
    x = 9;

    while (x >= 0)
    {
        printf("count %i\n", x);
        x--;
    }
}