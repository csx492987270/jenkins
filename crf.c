/* Indirect recursion.
    if first call to func_recurse is: func_recurse(p_glbl, 6)
    this code segment will call func_recurse inside func_b
*/
#include <stdio.h>

int func_b(int *q)
{
  if (q != 0) 
  {
    printf("func_b exec!\n");
    return func_a(q);
  }
  else
    return 5;
}

int func_a(int *p)
{
  if ((p != 0))
  {
    printf("func_recurse exec!\n");
    return func_b(p);  /* calls func_recurse indirectly */
  }
  return 0;
}

int main()
{
  int i = 0;
  int *j = &i;
  func_a(j);
  return 0;
}