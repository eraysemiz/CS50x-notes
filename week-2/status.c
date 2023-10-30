#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[])
{
    if (argc < 2)
    {
        printf("Missing command-line argument\n");
    }
    else if (argc > 2)
    {
        printf("Too many command-line arguments\n");
    }
    else
    {
        printf("Hello, %s!\n", argv[1]);
    }
}