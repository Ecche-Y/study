//
// Created by 22828 on 2021/12/13.
//
#include <stdio.h>
int main(void){
    int feet ,fathoms;      //多条声明变量
    fathoms = 2;
    feet = 6 * fathoms;
    printf("There are %d feet in %d fathoms!\n",feet,fathoms);//前一个%d对应feet，后一个%d对应fathoms
    printf("Yes, I said %d feet!\n",6*fathoms);

    return 0;
}