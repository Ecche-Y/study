#include <stdio.h>
/*
质数
    只能被1和自己整除的数，不包括1

break:跳出循环
continue:跳过循环这一轮剩下的语句进入下一轮
*/

int main(void)
{
    int x;
    x = 6;
    int i;

    // int isPrime = 1;
    for (i = 2; i < x; i++)
    {
        if (x % i == 0)
        {
            // isPrime = 0;
            break;
        }
        printf("%d\n", i);
    }
    // if (isPrime == 1)
    // {
    //     printf("是素数\n");
    // }
    // else
    // {
    //     printf("不是素数\n");
    // }
    if (i < x)
    {
        printf("不是素数\n");
    }
    else
    {
        printf("是素数\n");
    }

    return 0;
}