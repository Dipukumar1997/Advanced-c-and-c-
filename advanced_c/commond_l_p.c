#include <stdio.h>

int
main (int argc, char *argv[])
{
  int counter;

  for (counter = 0; counter < argc; counter++)
    printf ("%s\n", argv[counter]);

  register x = 5;
  printf("%d\n",x);
  
  return 0;
}