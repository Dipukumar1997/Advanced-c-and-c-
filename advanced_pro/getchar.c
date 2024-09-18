#include <stdio.h>

 int main (){

    int c,nl;
    c =getchar();
    while ((c = getchar()) !=EOF)
    {
        if (c == '\n')
        {
           ++nl; 
        }
        printf("%d l\n",nl);
        
        // putchar(c);
        // c = getchar();

    }
    
}