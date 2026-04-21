#include <stdio.h>

void main()
{

    /*
        used with loops:
            for
            while
            do while
        
        break => exit the loop
        continue => stop and continue (skip)
    */

    for (int i = 0; i < 10; i++)
    {
        if (i == 5)
        {
            break;
        }
        
        printf("x = %i \n", i);
    }

    for (int i = 0; i < 10; i++)
    {
        if (i == 5)
        {
            continue;
        }
        
        printf("x = %i \n", i);
    }
}