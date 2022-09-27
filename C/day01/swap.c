//
// Created by 22828 on 2022/1/11.
//
#include <stdio.h>
int main (void ){
    int a=5;
    int b=6;
    int t;

    t = a;
    a = b;
    b = t;
    printf("a = %d,b=%d\b", a,b);
    return 0;
}
