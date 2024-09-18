#include <stddef.h>
#include <stdio.h>

static const int values[] = {1, 2, 48, 681};
#define ARRAYSIZE(x) (sizeof x / sizeof x[0])

int main(int argc, char *argv[])
{
    // size_t i;
    for (size_t i = 0; i < ARRAYSIZE(values); i++)
    {
        printf("%d\n", values[i]);
    }
    // int a [] = {1 ... 100};
    // for (size_t i = 0; i < 100; i++)
    // {
    //     printf("%d\n",a[i]);
    // }
    int x;
    for (x = 1; x <= 10; x++)
    {
        if (x == 8)
            break;
        else
            printf("%d ", x);
    }
    int sum_of_odd_numbers= 0;

    for (x = 0; x < 10; x++)
    {
        if (x % 2 == 0)
            continue;
        else
            sum_of_odd_numbers += x;
    }
    printf("%d\n", sum_of_odd_numbers);

    return 0;
}