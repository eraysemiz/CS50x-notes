#include <stdio.h>

int main(void)
{

    int size;
    do
    {
    printf("Size: ");
    scanf("%i", &size);
    }
    while (size < 1);
    int times[size];

    for (int i = 0, j = 1; i < size; i++, j *= 2)
    {
        times[i] = j;
        printf("%i\n", times[i]);

    }
}