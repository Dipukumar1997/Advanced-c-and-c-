// file1.c

#include <stdio.h>

// Define the global variable
int x = 10;  // Initialize with a value

// Function to modify the global variable
void increment_x() {
    x++;
}

// Function to print the global variable
void print_x() {
    printf("Value of x in file1.c: %d\n", x);
}
