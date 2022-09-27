#include <stdio.h>
void butler(void );/* ANSI/ISO C 函数原型，函数声明，第一次以函数原型(prototype)出现，告知编译器需要在程序中使用该函数*/
int main(void ){
    printf("I will summon the butler function.\n");
    butler();//第二次出现以函数调用(function call)的形式出现在main()中
    printf("Yes. Bring me some tea and writeable DVDs.\n");

    return 0;
}
void butler(void )/*函数定义开始*/
{
    printf("You rang, sir\n");
}