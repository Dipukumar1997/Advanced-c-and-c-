#include <stdio.h>
int main()
{

    int guess;
    while (scanf("%d", &guess) != EOF)
    {
        if (guess == 42)
        {
            printf("nice\n");
            break;
        }
        else if (guess < 42)
        {
            printf("too low\n");
        }
        else
        {
            printf("too high\n");
        }
    }
}