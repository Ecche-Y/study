#include <stdio.h>
/*
��Ӳ��
*/
int main(void)
{
    //����break
    int x;
    int one, two, five;
    int exit = 0;

    scanf("%d", &x);
    for (one = 1; one < x * 10; one++)
    {
        for (two = 1; two < x * 10 / 2; two++)
        {
            for (five = 1; five < x * 10 / 5; five++)
            {
                if (one + two * 2 + five * 5 == x * 10)
                {
                    printf("������%d��1�Ǽ�%d��2�Ǽ�%d����ǵõ�%dԪ\n", one, two, five, x);
                    exit = 1;
                    break;//break��continueֻ�ܶ������ڵ��ǲ�ѭ����
                }
            }
            if (exit == 1)
                break;
        }
        if (exit == 1)
            break;
    }
    /*
    int x;
    int one, two, five;
    int exit = 0;

    scanf("%d", &x);
    for (one = 1; one < x * 10; one++)
    {
        for (two = 1; two < x * 10 / 2; two++)
        {
            for (five = 1; five < x * 10 / 5; five++)
            {
                if (one + two * 2 + five * 5 == x * 10)
                {
                    printf("������%d��1�Ǽ�%d��2�Ǽ�%d����ǵõ�%dԪ\n", one, two, five, x);
                    goto out;//goto��Ҫһ����ű�ſ��Զ��壬һ����������ͻ�����ѭ��ֱ�ӵ�������ָ��λ�ã�����ʹ�ó������Ƕ��ѭ����Ҫֱ���������ٽ���break
                }
            }
        }
    }
out:
*/
    return 0;
}