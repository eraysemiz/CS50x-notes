#include <stdio.h>
#include <cs50.h>

 int factorial(int number);

 int main(void)
 {
    int n = get_int("Number: ");
    printf("%i\n", factorial(n));
 }

 int factorial(int number)
 {
    if (number == 1)
    {
        return 1;
    }
    return number * factorial(number - 1);
 }