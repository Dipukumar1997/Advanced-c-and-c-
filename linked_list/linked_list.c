#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = (int*)malloc(5 * sizeof(int));  // Declare ptr and allocate memory
    if (ptr == NULL) {  // Check if malloc failed
        printf("Memory allocation failed\n");
        return 1;
    }

    for (int i = 0; i < 5; i++)
    {
        scanf("%d",ptr+i);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d ",*(ptr+i));
    }
    
    
    
    // Your code to use the allocated memory goes here
    
    free(ptr);  // Don't forget to free the allocated memory
    return 0;
}
