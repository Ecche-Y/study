/*
分段函数
    f(x) = -1;x<0
            0;x=0
            2x;x>0
    if (x < 0){
        f = -1;
    }else if(x == 0){
        f = 0;
    }else{
        f = 2 * x;
    }
级联的if-else if
    if(exp1)
        stl;
    else if(exp2)
        st2;
    else
        st3
*/
#include <stdio.h>
int main(void)
{
    int x;

    scanf("%d", &x);

    int f = 0;

    if (x < 0){
        f = -1;
    }else if(x == 0){
        f = 0;
    }else{//else属于最近的if
        f = 2 * x;
    }

    printf("%d\n",f);

    return 0;
}