#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
char sh[]="/bin/bash";
int init_func(){
    setvbuf(stdin,0,2,0);
    setvbuf(stdout,0,2,0);
    setvbuf(stderr,0,2,0);
    return 0;
}

int func(char *cmd){
    system(cmd);
    return 0;
}

int main(){
    init_func();
    char a[8]= {};
    char b[8]= {};
    puts("inputs:");
    gets(b);
    printf(b);
    if(a[0]==0x10){
        func(sh);
    }
    return 0;
}
