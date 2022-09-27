#include <stdio.h>
/*
    嵌套的循环
    
*/

int main(void )
{
    int x;
    // x = 6;
    x = 2;
    int cnt = 0;
    /* 
    for (x = 2; x < 100; x++)//输出一百以内的素数
    {
        int i;
        int isPrime = 1;
        for ( i = 2; i < x; i++)
        {
            if (x % i == 0)
            {
                isPrime = 0;
                break;
            }
        }
        if (isPrime == 1)
        {
            printf("%d ",x);
        }
    }
    */
    /*输出50个素数
    while (cnt < 50)
    {
        int i;
        int isPrime = 1;
        for ( i = 2; i < x; i++)
        {
            if (x % i == 0)
            {
                isPrime = 0;
                break;
            }
        }
        if (isPrime == 1)
        {
            printf("%d ",x);
            cnt++;
        }
        x++;
    }
    */
    for (x = 2; cnt < 50; x++)
    {
        int i;
        int isPrime = 1;
        for ( i = 2; i < x; i++)
        {
            if (x % i == 0)
            {
                isPrime = 0;
                break;
            }
        }
        if (isPrime == 1)
        {
            printf("%d ",x);
            cnt++;
        }
    }

    return 0;
}