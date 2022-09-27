#include <stdio.h>

/*
for循环像一个计数循环：设计一个计算器，初始化它，然后在计算器到达某值之前，重复执行循环体，而每执行一轮循环以一定步进进行调整比如加1或者减1

for(初始动作; 条件; 每轮的动作){
}
for中每个表达式都是可以省略的
for(; 条件;) == while(条件)

for(i = 0; i < 5; i = i + 1){
    printf("%d", i);
}

循环的选择
    ·如果有固定的次数，用for
    ·如果必须执行一次，用do_while
    ·其他情况用while
*/
int main(void){
    int n;

    scanf("%d", &n);
    int fact = 1;

    
    //int i = 1;
    // for ( int i = 1;/*初始动作*/ i <= n;/*循环继续的条件*/ i++/*循环每轮要做的动作*/)
    // {
    //     fact *=i;
    // }
    int i = n;
    for (n > 1; n--;)
    {
        fact *= n;
    }
    
    
    printf("%d != %d\n", i, fact);

    return 0;
}