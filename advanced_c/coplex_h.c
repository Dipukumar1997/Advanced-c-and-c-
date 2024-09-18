#include <complex.h>
#include <stdio.h>

void example(void)
{
    complex double z = 1.0 + 3.0 * I;
    printf("Phase is %f, modulus is %f\n", carg(z), cabs(z));
}

enum more_fruit
{
    banana = -17,
    apple,
    blueberry,
    mango
};

int main(void)
{
    example();

    // __complex__ float a = 4 + 3 * I;

    // float b = __real__ a; /* b is now 4. */
    // float c = __imag__ a; /* c is now 3. */
    // enum more_fruit {banana = -17, apple, blueberry, mango};

    enum more_fruit my_fruit;

    // Assign an enum value to the variable
    my_fruit = apple;

    // Print enum values
    printf("Enum value of banana: %d\n", banana);       // Output: -17
    printf("Enum value of apple: %d\n", apple);         // Output: -16
    printf("Enum value of blueberry: %d\n", blueberry); // Output: -15
    printf("Enum value of mango: %d\n", mango);         // Output: -14

    // Use the enum variable
    switch (my_fruit)
    {
    case banana:
        printf("Selected fruit: banana\n");
        break;
    case apple:
        printf("Selected fruit: apple\n");
        break;
    case blueberry:
        printf("Selected fruit: blueberry\n");
        break;
    case mango:
        printf("Selected fruit: mango\n");
        break;
    default:
        printf("Unknown fruit\n");
        break;
    }
    complex float x = 5 + 17 * I;
    complex float result = x * conj(x); // Use the conjugate for meaningful result
    printf("Complex multiplication result: %f\n", creal(result));
    // printf("%d %d %d\n",ca);
    size_t a = sizeof(int);
    size_t b = sizeof(float);
    size_t c = sizeof(5);
    size_t d = sizeof(5.143);
    size_t e = sizeof a;
    printf("%d %d %d %d\n",a,b,c,d);

    return 0;
}
