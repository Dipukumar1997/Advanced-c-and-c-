#include <stdio.h>
#include <stdlib.h>

union numbers
{
    int i;
    float f;
} first_number, second_number;

int main(void ){
    union numbers first_number;
    first_number.i = 5;
    first_number.f = 3.2425467;
    
    return 0;
}

