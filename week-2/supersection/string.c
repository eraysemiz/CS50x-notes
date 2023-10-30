#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string name = "Emma";

    for (int i = 0 , length = strlen(name); i < length; i++)
    {
        printf("%c\n", name[i]);
    }
}