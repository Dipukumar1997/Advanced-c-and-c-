#include <stdio.h>
#include <string.h>

void zap(char y[]){

    printf("y start zap %s\n",y);
    strcpy(y,"changed");
    printf("y and zap %s\n",y);

}
int main(void){
    char x[] = "ORIGINAL";
    printf("x before zap %s\n",x);
    zap(x);
    printf("x aftee zap %s\n",x);
}