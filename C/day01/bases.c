//
//以十进制、八进制、十六进制打印十进制100
//

#include <stdio.h>
int main(void ){
    int x = 100;

    /*
     %d 以十进制显示数字
     %o 以八进制显示数字
     %x 以十六进制显示数字

     显示各进制前缀
     %#d 0
     %#x 0x
     %#X 0X
     */
    printf("dec = %d; octal = %o; hex = %x\n",x, x, x);
    printf("dec = %d; octal = %#o; hex = %#x\n",x, x, x);

    return 0;
}
