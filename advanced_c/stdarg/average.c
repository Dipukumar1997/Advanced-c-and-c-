#include <stdio.h>
#include <stdarg.h>

float average(int n, ...) {
    va_list ap;
    va_start(ap, n);
    float total = 0;

    for (int i = 0; i < n; i++) {
        total += va_arg(ap, double);  // Retrieve as double due to promotion of float
    }

    va_end(ap);
    return total / n;  // Calculate the average
}

int main(void) {
    float averagei;
    averagei = average(4, 3.0, 4.0, 5.0, 6.0);  // Pass float values as doubles
    printf("%f\n", averagei);  // This will print the correct average
    return 0;
}
