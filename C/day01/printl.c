#include <stdio.h>
int main(void){
    int ten = 10;
    int two = 2;

    printf("%d minus %d is %d\n",ten, 2, ten - two);
    printf("%d minus %d is %d\n",ten);//遗漏两个参数

    return 0;
}