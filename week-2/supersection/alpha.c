#include <stdio.h>
#include <string.h>



int main(void)
{
    char text[100];
    printf("Text: ");
    scanf("%s", text);
    int check = 1;
    for (int i = 0, length = strlen(text); i < length - 1; i++)
    {
        if (text[i] < text[i + 1])
        {
            check = 1;
        }
        else
        {
            check = 0;
            break;
        }
    }

    if (check == 1)
    {
        printf("YES\n");
    }
    else if (check == 0)
    {
        printf("NO\n");
    }
}