#include<stdio.h>

void main() {
    // int age = 23;
    int age;
    char name[7];
    printf("Enter Your age: ");
    scanf("%d", &age); // like input in python and &age (Memory Location Address) and %d هي القيمة التي نأخدها من مستخدم ونخزنها في عنوان المتغير age
    printf("Enter Your name: ");
    scanf("%s", &name); // like input in python and &age (Memory Location Address) and %d هي القيمة التي نأخدها من مستخدم ونخزنها في عنوان المتغير age
    printf("Your name %s and age is %d\n", name, age);
}