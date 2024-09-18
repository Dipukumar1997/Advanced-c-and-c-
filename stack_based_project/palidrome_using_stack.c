#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h> 

// Define the structure for the stack
struct Stack {
    int top;
    int size;
    char* arr; // Stack will store characters
};

// Function to initialize the stack
void initStack(struct Stack* stack, int size) {
    stack->top = -1;
    stack->size = size;
    stack->arr = (char*)malloc(size * sizeof(char)); // Allocate memory for the stack
}

// Function to check if the stack is empty
int isEmpty(struct Stack* stack) {
    return stack->top == -1; // If top is -1, stack is empty
}

// Function to check if the stack is full
int isFull(struct Stack* stack) {
    return stack->top == stack->size - 1; // If top reaches the size-1, stack is full
}

// Function to push a character onto the stack
void push(struct Stack* stack, char ch) {
    if (isFull(stack)) {
        printf("Stack overflow!\n");
        return;
    }
    stack->top++;
    stack->arr[stack->top] = ch; // Add character to stack
}

// Function to pop a character from the stack
char pop(struct Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack underflow!\n");
        return '\0'; // Return null character if stack is empty
    }
    char ch = stack->arr[stack->top]; // Get the top character
    stack->top--; // Remove it from the stack
    return ch;
}

// Function to check if a string is a palindrome
int isPalindrome(char* str) {
    int length = strlen(str);
    struct Stack stack;
    
    // Initialize the stack with half the size of the string
    initStack(&stack, length / 2);

    // Push the first half of the string onto the stack
    for (int i = 0; i < length / 2; i++) {
        push(&stack, str[i]);
    }

    // Calculate the starting point for comparison with the second half
    int start = (length % 2 == 0) ? length / 2 : length / 2 + 1;

    // Compare the second half of the string with the characters popped from the stack
    for (int i = start; i < length; i++) {
        char ch = pop(&stack);
        if (tolower(str[i]) != tolower(ch)) {
            return 0; // If any character doesn't match, it's not a palindrome
        }
    }

    return 1; // If all characters match, it's a palindrome
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    // Check if the string is a palindrome
    if (isPalindrome(str)) {
        printf("%s is a palindrome\n", str);
    } else {
        printf("%s is not a palindrome\n", str);
    }

    return 0;
}
