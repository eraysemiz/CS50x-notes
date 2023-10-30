#include <stdio.h>
#include <cs50.h>

int main(void)
{
    char c = get_char("Do you agree?(y/n) ");
    if (c == 'y' || c == 'Y')
    {
        printf("You have agreed the terms\n");
    }
    else if (c == 'n' || c == 'N')
    {
        printf("You have denied the terms\n");
    }
    else
    {
        printf("Invalid input\n");
    }
}