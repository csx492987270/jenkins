#include <stdio.h>

int test_fmt_1()
{
    int a = 0;

    /* The format string specified for a "%c", 
       but the parameter is of size int, 
       result is truncated and unexpected
    */
    printf("result(char) %c is truncated\n", a);
    printf("result(float) %f is truncated\n", a);
    
    return 0;
}

int test_fmt_2(int a, int guard)
{
    int x = 0;
    int int_result = 0;

    if (guard != 0)
      int_result = a * x;

    /* The format string specified two values to be printed, 
       only one actual parameter is passed. 
       The second output is unpredictable
     */
    printf("result %d, guard = %d\n", int_result);
    return 0;
}
