//
// Created by liode on 2022/11/5.
//
#include "stdio.h"
#include "ctype.h"
int main(void){
    while (getchar())
    printf("%d\n",isnumber('8'));
    printf("%d\n",isnumber('a'));
    return 0;
}