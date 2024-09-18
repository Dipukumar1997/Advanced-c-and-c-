#include <stdio.h>
int main()
{
    int first = 1;
    int val, maxval, minval;
    while (scanf("%d\n", &val) != EOF)
    {

        if (first || val > maxval)
            maxval = val;
        if (first || val < minval)
            minval = val;

        printf(" Maximun is  %d\n", maxval);
        printf(" Maximun is  %d\n", minval);
    }
    
    
}