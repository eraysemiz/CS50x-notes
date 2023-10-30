#include <stdio.h>


int main(void)
{
    char name[100];
    int age;
    long phone_number;

    printf("Name: ");
    scanf("%s", name);

    printf("Age: ");
    scanf("%i", &age);

    printf("Phone Number: ");
    scanf("%ld", &phone_number);
    printf("Name: %s\nAge: %i\nPhone Number: %ld\n", name, age, phone_number);
}