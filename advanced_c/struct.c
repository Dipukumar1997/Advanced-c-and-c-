#include<stdio.h>



struct point
  {
    int x, y;
  };

struct rectangle
  {
    struct point top_left, bottom_right;
  };

struct rectangle my_rectangle = { {0, 5}, {10, 0} };

int main(void){

    // struct point first_point ={5,10};
    struct point first_point = {.y = 10,.x=65};
    printf("%d\n",my_rectangle.top_left); 

    // printf("%d\n",first_point.y);
    return 0;
}