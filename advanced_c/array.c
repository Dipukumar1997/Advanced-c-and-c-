#include <stdio.h>
#include <math.h>

struct line
{
    int length;
    char contents[0];
};

int main(main)
{
    // struct line *this_line = (struct line *)
    //     // malloc(sizeof(struct line) + this_length);
    // this_line->length = this_length;

    int new_array[100] = {[0 ... 9] = 1, [10 ... 98] = 2, 3};

    struct point
    {
        int x, y;
    };
    struct point point_array[2] = {{4, 5}, {8, 9}};
    point_array[0].x = 3;

    // extern is useful for declaring variables that you want to be visible to all source files that are linked into your project. You cannot initialize a variable in an extern declaration, as no space is actually allocated during the declaration. You must make both an extern declaration (typically in a header file that is included by the other source files which need to access the variable) and a non-extern declaration which is where space is actually allocated to store the variable. The extern declaration may be repeated multiple times.

// extern int numberOfClients;
//     int numberOfClients = 0;


    // printf("%d\n",math.cosine(3.14159)); 

    return 0;
}