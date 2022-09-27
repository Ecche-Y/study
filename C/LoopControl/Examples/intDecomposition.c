#include <stdio.h>
/*
正序分解整数
    x=13425
    13425 / 10000   ->1
    13425 % 10000   ->3425
    10000 / 10      ->1000
    3425 / 1000     ->3
    3425 % 1000     ->425
    1000 / 10       100
    ……
 */
int main(void )
{
    int x;
    scanf("%d",&x);
    int mask = 1;
    int t = x;
    while (t>9){//获取mask位数
        t /= 10;
        mask *= 10;
    }
    printf("x=%d mask=%d\n",x,mask);
    do
    {
        int d = x / mask;
        printf("%d",d);
        if(mask > 9)//输出空格
        {
            printf(" ");
        }
        x %= mask;
        mask /= 10;
    } while (mask > 0);
    printf("\n");
    return 0;
}