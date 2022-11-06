//
// Created by liode on 2022/11/5.
//
#include "stdio.h"
int main(void){
    FILE * f = fopen("../stdio/source/hello.txt","r");
    if(f!=NULL){
        printf("open success\n");
    } else{
        printf("open failed\n");
    }

    int a = fclose(f);
    if(a==0){
        printf("close success\n");
    } else{
        printf("close failed\n");
    }
}