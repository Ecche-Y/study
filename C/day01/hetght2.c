//
// Created by 22828 on 2021/12/20.
//

#include <stdio.h>

int main(){
    printf("请分别输入身高的英尺和英寸，"
           "如输入\"5 7\"表示5英尺7英寸：");

    double foot;
    double inch;

    scanf("%lf %lf", &foot, &inch);

    printf("身高是%f米。\n",
           ((foot + inch / 12) * 0.3048));//两个整数类型运算结果为整数，C简单粗暴把小数点扔了，且不会进行四舍五入
    /*
     ((foot + inch / 12) * 0.3048));
     改进方法
     ((foot + inch / 12.0) * 0.3048));
     当浮点数和整数放到一起运算时，c会将整数转换成浮点数，然后进行浮点数的运算
     */
    return 0;
}