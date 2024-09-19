// #include <stdio.h>

// int swap(int ptr1, int ptr2)
// {
//     int temp = ptr1;
//     ptr1 = ptr2;
//     ptr2 = temp;
//     return ptr1,ptr2;
// }
// int main()
// {
//     // int x = 2, y = 3;
//     swap(2, 3);

//     // printf("%d %d\n", x, y);
//     printf("%d %d\n",swap(2,3));
//     return 0;
// }


#include <stdio.h>
typedef struct {
    int a,b;
}pair;
pair swap (int a , int b){
    pair result;
    result.a = b ;
    result.b = a;
    return result;
}
int main(){
    int x = 2 , y = 3;
    printf(" x = %d , y = %d\n",x,y);

    pair swapped = swap(x,y);
    printf("after swap :x=%d y=%d \n",swapped.a,swapped.b);
}
