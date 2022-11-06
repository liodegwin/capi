#include <stdio.h>
#include <string.h>

//
// Created by liode on 2022/11/6.
//
/*
 * use fgets read a txt
 */
int main(void){
    FILE * hello_txt = fopen("../stdio/resource/hello.txt","r");
    if(hello_txt!=NULL){
        char s[20];
        char* ret;
        while ((ret = fgets(s,20,hello_txt)) != NULL){
            printf("S is:\"%s\"\nGet %zu char\n",s,strlen(s));
        }
    }else{
        printf("open failed\n");
    }
}