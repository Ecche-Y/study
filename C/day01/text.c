//
// Created by 22828 on 2021/12/19.
//
#include <stdio.h>

int main(){
    int amount = 0;
    int prince = 0;

    printf("请输入金额：\n");
    scanf("%d", &prince);

    printf("请输入面额：\n");
    scanf("%d",&amount);

    int change = amount - prince;
    printf("找您%d元\n",change);
    return 0;
}