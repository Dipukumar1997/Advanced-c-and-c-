#include <stdio.h>
// #include <stdalign.h>

typedef struct fish
{
    float weight;
    float length;
    float probability_of_being_caught;
} fish_type;

void foo(int *x)
{
    *x = *x + 42;
}

int main(void)
{
    fish_type meri;
    meri.length = 2;
    
    int a = 15;
    foo(&a);
}
