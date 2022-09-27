//
// Created by 22828 on 2021/12/16.
//
#include <stdio.h>
int main (void )
{
    char ch;

    /*
     输入字母后，scanf()函数会读取用户输入的字符，&符号表示把输入的字符赋给变量ch，
     接着printf()函数打印ch的值两次，第一次打印一个字符（对应代码中的%c），第二次
     打印一个十进制整数值（对应代码中的%d）
     */
    printf("Please enter a character.\n");
    scanf("%c",&ch);
    printf("The code for %c is %d.\n",ch, ch);

    return 0;
}