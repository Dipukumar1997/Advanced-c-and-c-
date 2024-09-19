// file2.c

#include <stdio.h>

// Declare the global variable defined in file1.c
extern int x;

// Function to print the global variable
void print_x_from_file2() {
    printf("Value of x in file2.c: %d\n", x);
}
