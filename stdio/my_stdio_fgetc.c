#include <stdio.h>

//
// Created by liode on 2022/11/6.
//
/*
 * use fgetc read a txt
 */
int main(void){
    FILE * hello_txt = fopen("../stdio/resource/hello.txt","r");
    if(hello_txt!=NULL){
        int c;
        while((c = fgetc(hello_txt))!=EOF){
            printf("%c",c);
        }
    }else{
        printf("open failed\n");
    }

    printf("\n\nuse fgetc open byte stream\n");
    FILE * pic = freopen("../stdio/resource/pic.jpg","r",hello_txt);
    if(pic != NULL){
        int ret = 0;
        for(int i=0;i<10;i++){
            ret = fgetc(pic);
            printf("%x\n",ret);
        }
    } else{
        printf("open pic.jpg failed\n");
    }
}