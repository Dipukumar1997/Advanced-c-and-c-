// main.c

#include <stdio.h>

//  gcc -o main file1.c file2.c main.c
//./main

// Function prototypes
void increment_x();
void print_x();
void print_x_from_file2();

int main() {
    // print_x();               // Print initial value of x (10)
    increment_x();           // Increment the global variable x
    print_x();               // Print the incremented value of x (11)
    print_x_from_file2();    // Print the value of x from another file (11)

    return 0;
}
