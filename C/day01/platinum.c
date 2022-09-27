//
// Created by 22828 on 2021/12/14.
//
#include <stdio.h>

int main(void )
{
    float weight;//你的体重
    float value;//相等重量的黄金

    printf("Are you worth your weight in platinum?\n");
    printf("Let's check it out.\n");
    printf("Please enter your weight in pounds:");

    //获取用户输入
    scanf("%f", &weight);
    //scanf()用于读取键盘输入。%f说明scanf()要读取用户从键盘输入的浮点数，&weight告诉scanf()把输入的值赋给weight变量，scanf()函数使用&符号表示找到weight变量的地点
    //假设白金价格是每盎司$1700
    //14.5833用于英镑常衡盎司转换为金衡盎司
    value = 1700.00 * weight * 14.5833;
    printf("your weight in platinum is worth $% .2f.\n", value);//%.2f中的.2用于控制输出只显示小数点后两位
    printf("You are easily worth that! If platinum prices drop,\n");
    printf("eat more to maintain your value.\n");

    return 0;
}
