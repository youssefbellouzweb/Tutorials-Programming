#include <stdio.h>
#include <stdbool.h>

void main()
{

    // type nameVariable = value; value is optional

    // for integer variables
    int age = 4;
    long numberSerial = 172981798371982;

    // for floating variables
    float sold = 56.890901282;
    double price = 3.5;

    // for text variables
    char c = 'a';
    char name[7] = "youssef";
    char namefrined[] = "brahim";

    // for boolean variables
    bool x = true;
    bool y = false;

    // for integer
    printf("Hello, I'm %i years old\n", age);
    // or
    printf("Hello, I'm %d years old\n", age);

    // for floating
    printf("price product is %f\n", sold);

    // %.2f يعني إطبع لي رقمين بعد الفاصلة
    printf("price product is %.2f\n", sold);

    // for char
    printf("my char is %c\n", c);

    // for string
    printf("my name %s, my name frined %s\n", name, namefrined);

    // for boolean
    printf("my accept %d\n", x);
}