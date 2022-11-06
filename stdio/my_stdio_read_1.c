//
// Created by liode on 2022/11/5.
//
#include "stdio.h"
int main(void){
    FILE * fp = fopen("../stdio/resource/read_1.txt","r");
    if(fp==NULL){
        printf("error\n");
    } else{
        char buf[100];
        size_t n = 0;
        while( (n = fread(buf,sizeof (char ),20,fp))){
            for( int i=0;i<n;i++){
                printf("%c",buf[i]);
            }
        }
        ;
        fclose(fp);
    }
    return 0;
}