#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    char *arr; // Change to char for parentheses
};

void push(struct stack *ptr, char value)
{
    if (ptr->top < ptr->size - 1) // Ensure stack is not full
    {
        ptr->top++;
        ptr->arr[ptr->top] = value;
    }
    else
    {
        printf("Stack overflow\n");
    }
}

char pop(struct stack *s)
{
    if (s->top == -1)
    {
        printf("Stack underflow\n");
        return '\0'; // Return null character or some indicator
    }
    else
    {
        return s->arr[s->top--];
    }
}

int isEmpty(struct stack *ptr)
{
    return (ptr->top == -1);
}

int match(char opening, char closing)
{
    return (opening == '(' && closing == ')') ||
           (opening == '{' && closing == '}') ||
           (opening == '[' && closing == ']');
}

void parthes(char *expression, struct stack *s)
{
    for (int i = 0; expression[i] != '\0'; i++)
    {
        if (expression[i] == '(' || expression[i] == '{' || expression[i] == '[')
        {
            push(s, expression[i]);
        }
        else if (expression[i] == ')' || expression[i] == '}' || expression[i] == ']')
        {
            if (isEmpty(s)) // If stack is empty and we encounter a closing parenthesis
            {
                printf("Unbalanced expression: extra closing parenthesis '%c'\n", expression[i]);
                return;
            }
            char popped_ch = pop(s);
            if (!match(popped_ch, expression[i])) 
            {
                printf("Unbalanced expression: mismatched parentheses\n");
                return;
            }
        }
    }
    if (isEmpty(s))
    {
        printf("Yes, the expression has balanced parentheses\n");
    }
    else
    {
        printf("No, the expression is not balanced\n");
    }
}

int main()
{
    struct stack s;
    s.size = 12;
    s.top = -1;
    s.arr = (char *)malloc(sizeof(char) * s.size); // Change to char
    if (s.arr == NULL) // Check if malloc was successful
    {
        printf("Memory allocation failed\n");
        return 1;
    }
    
    parthes("3*4(2+6]())", &s);

    free(s.arr); // Free allocated memory
    return 0;
}
