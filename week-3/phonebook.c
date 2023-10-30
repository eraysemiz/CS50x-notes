#include <cs50.h>
#include <stdio.h>
#include <string.h>

typedef struct
{
    string name;
    string number;
}
person;

person people[2];

int main(void)
{
    people[0].name = "Eray";
    people[0].number = "+90-536-549-7043";
    people[1].name = "Mehmet";
    people[1].number = "90+-536-548-8045";

    string name = get_string("Name: ");

    for (int i = 0; i < 2; i++)
    {
        if (strcmp(people[i].name, name) == 0)
        {
            printf("Number: %s\n", people[i].number);
            return 0;
        }
    }
    printf("Not found\n");
    return 1;

}