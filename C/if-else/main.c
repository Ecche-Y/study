/*
嵌套的判断
    当if的条件满足或不满足的时候要执行的语句也可以是一条if或者if-else语句，这就是嵌套的if语句
        if(code == READY)
            if(count < 20)
                printf("一切正常\n");
            else
                printf("继续等待");
    else的匹配
        else总是和最近的那个if匹配
            if(code == READY){
                if(count < 20)
                    printf("一切正常\n");
                }else
                    printf("继续等待");

    缩进
        缩进格式不能按时else的匹配

    tips
        在if或else后面总是用{}
        即使只有一条语句的时候
*/

#include <stdio.h>
int main(void)
{
    const int READY = 24;
    int code = 0;
    int count = 0;

    scanf("%d %d", &code, &count);

    if (code == READY)
        if (count < 20)
            printf("一切正常\n");
        else
            printf("继续等待\n");

    // int a, b, c;
    // scanf("%d %d %d", &a, &b, &c);
    // int max = 0;

    // if (a>b)
    // {
    //     if (a>c)
    //     {
    //         max = a;
    //     }else{
    //         max = c;
    //     }
    // }else{
    //     if (b>c){
    //         max = b;
    //     }else
    //     {
    //         max = c;
    //     }
    // }

    // printf("The max is %d\n", max);

    return 0;
}