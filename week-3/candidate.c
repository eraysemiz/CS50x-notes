#include <stdio.h>


typedef struct
{
     char name[100];
     int age;
     int vote;
}
president;

president candidate[2];

int main(void)
{
    printf("Name: ");
    scanf("%s", candidate[0].name);
    printf("Age: ");
    scanf("%d", &candidate[0].age);
    printf("Vote: ");
    scanf("%d", &candidate[0].vote);

    printf("Candidate;\nName: %s\nAge: %i\nVote: %i\n", candidate[0].name, candidate[0].age, candidate[0].vote);
}