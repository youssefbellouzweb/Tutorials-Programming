#include<stdio.h>
#include<stdbool.h>

void main() {

    // type nameVariable = value; value is optional

    // for integer variables
    int age = 4;
    long numberSerial = 172981798371982;

    // for floating variables
    float sold = 56.89;
    double price = 3.5;

    // for text variables
    char c = 'a';
    char name[7] = "youssef";

    // for boolean variables
    bool x = true;
    bool y = false;
    
    printf("Hello, I'm %i years old\n", age);
    // or
    printf("Hello, I'm %d years old\n", age);
}