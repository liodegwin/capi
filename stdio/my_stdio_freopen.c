//
// Created by liode on 2022/11/5.
//
#include "stdio.h"
int main(void){
    FILE * fp = freopen("../stdio/source/stdout.txt","w",stdout);
    if(fp!=NULL){
        printf("hello");
    } else{
        printf("fp == NULL\n");
    }
    return 0;
}