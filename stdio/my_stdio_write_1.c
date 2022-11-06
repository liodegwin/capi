//
// Created by liode on 2022/11/5.
//
#include <string.h>
#include <errno.h>
#include "stdio.h"
int main(void){
    FILE * fp = fopen("../stdio/resource/write_1.txt","w");
    if(fp==NULL){
        printf("error\n");
    } else{
        char * s = "hello you\nline2";
        size_t n = 0;
        n = fwrite(s,sizeof (char),strlen(s),fp);
        printf("write %zu into write_1.txt",n);
        fclose(fp);
    }
    return 0;
}