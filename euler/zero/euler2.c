#include <stdio.h>
#include <stdlib.h>

int main(int i,char**p){if(p=malloc(2*sizeof(char*)),p[0]=malloc(sizeof(int)),p[1]=malloc(sizeof(int)),i=1,*(int*)(p[0])=2,*(int*)(p[1])=0){}else while(i<4000000)if(i+=*(int*)(p[0]),*(int*)(p[0])=i-*(int*)(p[0]),i-=*(int*)(p[0]),*(int*)(p[0])+=i,i%2){}else if(*(int*)(p[1])+=i){}if(printf("%d\n",*(int*)(p[1]))&&(exit(0),0)){}}