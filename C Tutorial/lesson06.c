#include<stdio.h>

/*
--- Switch statement ---
    switch (check value)
    {
        case v1:
                // code
            break;
        case v1:
                // code
            break;
        default:
                // code
            break;
    }
*/

void main() {
    int x = 3;

    switch (x)
    {
        case 2:
                printf("this value is 2");
            break;
        case 3:
                printf("this value is 3");
            break;
        default:
                printf("not found!");
            break;
    }
}