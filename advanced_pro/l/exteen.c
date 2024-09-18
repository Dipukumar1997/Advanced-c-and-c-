#include <stdio.h>

#define MAXLINE 1000 /* maximum input line size */

char line[MAXLINE]; /* input line */
char save[MAXLINE]; /* longest line saved here */
int max;            /* length of longest line seen so far */

/* Function to get a line of input */
int get_line(void)
{
    int c, i;

    for (i = 0; i < MAXLINE - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        line[i] = c;

    if (c == '\n')
    {
        line[i] = c;
        ++i;
    }
    line[i] = '\0';
    return i;
}

/* Function to copy line to save */
void copy(void)
{
    int i = 0;
    while ((save[i] = line[i]) != '\0')
        ++i;
}

int main(void) /* find longest line */
{
    int len;
    max = 0;

    while ((len = get_line()) > 0)
    {
        if (len > max)
        {
            max = len;
            copy();
        }
    }

    if (max > 0) /* there was a line */
        printf("%s", save);

    return 0; /* return 0 to indicate successful completion */
}


