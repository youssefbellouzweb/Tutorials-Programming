#include<stdio.h>
/*
--- conditions ---
    >
    <
    >=
    <=
    ==
    !=
*/
void main() {
    int num = 0;

    if (num == 5)
    {
        printf("%i condition is true\n", num);
    } else if(num == 3) {
        printf("condition is maybay 3\n");
    } else if(num == 2) {
        printf("condition is maybay 2\n");
    } else if(num == 1) {
        printf("condition is maybay 1\n");
    } else
    {
        printf("condition is false %i\n", num);
    }
}