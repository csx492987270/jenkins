#include <stdio.h>

int assign()
{
  int *c;
  c = 1;
  return &c;
}

int test_udr()
{
  int *a;
  a = assign();  /* return a stack address and assign to a */
  printf("assigned value: %d", a); /* use dangling pointer */
  return 0;
}
