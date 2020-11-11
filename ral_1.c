#include <stdio.h>

/*
局部指针

　　局部指针跟上面所述的局部变量一样。可以返回一个局部指针的值，也可以返回一个局部静态指针的地址，但不应该返回一个局部自动指针的地址，除非自动指针的地址指向数据区或堆区。

　　返回值为局部指针，可以分为：（1）声明局部变量，返回其地址；（2）声明局部数组，返回数组名；（3）声明局部指针，返回该指针。

　　1.返回局部变量地址，局部变量分为自动和静态局部变量，不应该返回指向局部自动变量的指针，因为函数调用结束后栈上声明的局部自动变量被抛弃，这个指针指向一个不再存在的对象，是无意义的。但可以返回指向局部静态变量的指针，因为静态变量存在数据区，它的生存期从定义起到程序结束。
*/
char * ral_1(){
     char *arr = "hello world"; //字符常量
     //static char arr[] = "hello world!";
     return arr;
}

char * ral_2(){

    static char *arr = "hello world"; //字符常量
     //static char arr[] = "hello world!";
     
     return arr;
}

void  test_ral(){
     char *s1 = ral_1();
     char *s2 = ral_2();

     printf("s = %s\n", s1);
     printf("s = %s\n", s2);
}