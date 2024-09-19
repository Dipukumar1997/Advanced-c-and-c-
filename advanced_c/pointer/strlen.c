#include <stdio.h>

int strlen(char *s){
    
    for (int i = 0; *s!='\0'; i++)
    {
        extern  int n;
        n++;
    }
    return n;
}
int main(){

    printf("%d\n",strlen("qwe12"));
}