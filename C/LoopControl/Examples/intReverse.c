#include <stdio.h>
/*
整数分解
    一个整数是由1至多位数字组成的
    对一个整数做%10的操作，可以得到它的个位数；
    对一个整数做/10的操作，可以去掉它的个位数；
    再对2的结果做%10，就得到原来数的十位数；


*/
int main(void)
{
    int x;
    // scanf("%d", &x);
    x = 12345;
    int digit;
    int ret = 0;
    while (x > 0)
    {
        digit = x % 10;
        // printf("%d", digit);
        ret = ret * 10 + digit;
        printf("x=%d,digit=%d,ret=%d\n", x, digit, ret);
        x /= 10;
    }
    printf("%d", ret);

    return 0;
}