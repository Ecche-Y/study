#include <stdio.h>
int main(void){
    int x;
    printf("请输入数字：");
    scanf("%d",&x);
    int n = 0;
    do
    {
        x /= 10;
        n++;
    } while (x > 0);
    printf("%d",n);
    return 0;
}