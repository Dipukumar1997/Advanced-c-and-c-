#include <stdio.h>
#include <stdbool.h>

typedef unsigned int t_flag;
    #define FLAG_A (1<<0)
    #define FLAG_B (1<<1)
    #define FLAG_C (1<<2)

int f(int x , t_flag flags){
 
    if (flags & FLAG_A)
    {
        x = x+x;
    }
    if (flags & FLAG_B)
    {
        x *=x;
    }
    if (flags & FLAG_C)
    {
        x= x/3;
    }
    
    

    
    
}
int main(void){
    printf("%d\n",f(1234,FLAG_B));
}