//
// 整数溢出
//
#include <stdio.h>
int main(void){
    int i = 2147483647;
    unsigned int j = 4294967295;

    /*
     把整数j看作汽车里程表，到达他的最大值时，会重新从起点开始
     整数I也是如此，主要的区别是unsigned int类型的变量j从0开始；
     而int类型的变量i则是从-2147483648开始

     */
     
    printf("%d %d %d\n",i, i+1, i+2);
    printf("%u %u %u",j, j+1, j+2);

    return 0;
}