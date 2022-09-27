#include <stdio.h>

/*
前n项求和
*/
int main(void){
    int n;
    int i;
    double sum = 0.0;
    //int sign = 1;
    double sign = 1.0;
    n = 1000;

    for (i = 1; i <= n; i++)
    {
        sum += sign / i;
        sign = -sign;
    }

    printf("f(%d)=%f\n", n, sum);

    return 0;
}