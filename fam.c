#include <stdio.h>
#include "fam_2.h"

/*同文件函数形式与实际参数不匹配时，编译器能够编译成*.i文件，但是不能编译*.s,*.o文件。 */
int test_fam_1(int a, int guard)
{
    int x = 0;
    int result = 0;
    if (guard != 0)
      result = a * x;
   /* test_fam(result); */ 
                /* missing one parameter, and "guard" will 
                    have random value during execution at this point
                */
               /* NOTE: *.i can compile success, but can't compile *.s */
    return 0;
}

/*跨文件函数定义、申明出现不一致；*/
/*
int test_fam_2(){
        int c = fam_2();            //调用时也不传参，这样才能编译通过
        printf("%d\n",c);
        return 0;
}main
*/