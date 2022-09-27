/*
猜数游戏
    计算机随机想一个数，记在变量number里;
    一个负责计次数的变量count初始为0;
    让用户输入一个数字a;
    count递增(加一);
    判断a和number的大小关系，如果a大了，输出“猜大了”，如果a小了，输出“猜小了”;
    如果a和number是不相等的(无论大小)，程序回到第三步；
    反之，程序输出"猜中了"和次数，然后结束

    循环的条件是a和number不相等

随机数
    每次召唤rand()就得到一个随机的数
    需要调用#include <stdlid.h>和#include <time.h>
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand(time(0));
    int number = rand() % 100 + 1;
    int count = 0;
    int a = 0;
    printf("我已经想好1到100之间的数\n");
    do
    {
        printf("请输入0到100之间数：");
        scanf("%d", &a);
        count++;
        if (a > number)
        {
            printf("大了。");
        }
        else if (a < number)
        {
            printf("小了");
        }

    } while (a != number);
    printf("正确答案是%d,你用了%d次\n", a, count);

    return 0;
}
