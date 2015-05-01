#include <stdio.h>
#include <stdlib.h>
#include <setjmp.h>

int main(int i,char**p){return p=malloc(2*sizeof(char*)),p[0]=(char*)malloc(sizeof(jmp_buf)),p[1]=(char*)malloc(sizeof(int)),i=0,*(int*)(p[1])=setjmp(*(jmp_buf*)(p[0])),i+=!(*(int*)(p[1])%3&&*(int*)(p[1])%5)**(int*)(p[1]),*(int*)(p[1])<999?longjmp(*(jmp_buf*)(p[0]),*(int*)(p[1])+1),0:printf("%d\n",i),0;}