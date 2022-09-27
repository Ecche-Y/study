#include <stdio.h>
/*while循环
 当条件满足时，不断重复循环体内的语句
 循环执行之前判断是否继续循环，所以有可能循环体一次也没有被执行
 条件成立循环继续
 */
int main(void ){
    int x;
    int n = 0;
    //scanf("%d",&x);
    x = 352;
    while (x>0){
        n++;
        x /= 10;
        printf("x=%d,n=%d\n",x,n);
    }
    printf("%d\n",n);

    return 0;
}