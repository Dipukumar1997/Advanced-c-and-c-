#include <stdio.h>
#include <stdlib.h>

struct Stack
{
    int size;
    int top;
    int *arr;
};

int isEmpty(struct Stack *ptr)
{
    return (ptr->top == -1); // Simplified the return statement
};
int isFull(struct Stack *ptr)
{
    return (ptr->top == ptr->size - 1);
};

void push(struct Stack *ptr, int value)
{
    if (isFull(ptr))
    {
        printf("stack overflow");
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = value;
    }
};
void pop(struct Stack *ptr)
{

    if (isEmpty(ptr))
    {
        printf("underflow condition");
    }
    else
    {
        int value = ptr->arr[ptr->top];
        ptr->top--;
        printf("popped elemt is %d\n", value);
    }
};

int peek(struct Stack *ptr, int i)
{
    int arrayindex = ptr->top - i + 1;
    if (arrayindex < 0)
    {
        printf("not a valid position to be fiunded out\n");
    }
    else
    {
        return ptr->arr[arrayindex];
    }
};
void display(struct Stack *ptr)
{

    int i = 0;
    while (i <= ptr->top)
    {
        printf("Elents in in Stack s is  %d\n", ptr->arr[i]);
        i++;
    }
}

int main()
{
    struct Stack s;
    s.size = 80;
    s.top = -1;
    s.arr = (int *)malloc(s.size * sizeof(int));

    // if (s.arr == NULL) { // Check if malloc was successful
    //     printf("Error: Memory allocation failed\n"); // Use printf to print error message
    //     return 1; // Return an error code
    // }

    // Print whether the stack is empty

    // push a value in array which ...DMA
    push(&s, 7);
    push(&s, 8);
    push(&s, 9);
    // display(&s);
    // printf("Is the stack empty? %d\n", isEmpty(&s)); // Use %d to format the integer

    // int hel = ();
    // printf("%d\n",peek(&s,1));
    // pop(&s);
    // display(&s);

    // printf("Is the stack full? %d \n ", isFull(&s));

    // Free allocated memory
    // free(s.arr);

    for (int j = 1; j <= s.top+1; j++)
    {
        printf("value at %d is %d\n",j,peek(&s,j));
    }
    

    return 0;
}
