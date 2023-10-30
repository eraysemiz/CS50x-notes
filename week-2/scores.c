#include <cs50.h>
#include <stdio.h>

const int N = 3;
float average(int length, int score_array[]);

int main(void)
{
    int scores[N];

    for (int i = 0; i < N; i++)
    {
        scores[i] = get_int("Score: ");
    }
    printf("Average: %f\n", average(N, scores));
}

float average(int length, int score_array[])
{
    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum += score_array[1];
    }
    return sum / (float) length;
}