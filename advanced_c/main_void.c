#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int foo(int x , int y ){
    return x+y;
}
int main (void ){
    int xs[] = {1,2,3,4,5,6,7,8};

    int (*f)(int , int) = foo;
    printf("%d\n",f(3,4));

    return 0;
}