#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int foo(int x, int y)
{
    return x + y;
}

bool p(int x){
    return x%2 == 0 ;
}

void print_if(int xs[10] , bool(*predicte)(int)){
    for (int i = 0; i < 10; i++)
    {
        if (predicte(xs[i]))
        {
            printf("%d\n",xs[i]);
        }
    }
}
int compare (const void *x1, const void *x2){
    return (*(int*)x1)-(*(int*)x2);
}

int main (void){

    int xs[] = {1,2,3,5,4,6,7,8,9,10};
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", xs[i]);
    }
    qsort(xs,10,sizeof(int),compare);
    printf("\n____________________\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", xs[i]);
    }
    
    
    // print_if(xs,p);
    return 0;
}