#include <stdio.h>
#include <stdlib.h>
#include <setjmp.h>

int main(int i,char**argv){return argv=malloc(3*sizeof(char*)),argv[0]=malloc(sizeof(int)),argv[1]=malloc(sizeof(int)),argv[2]=malloc(sizeof(jmp_buf)),*(int*)(argv[0])=0,*(int*)(argv[1])=(*(int*)(argv[0]))++,i=(*(int*)(argv[0])++)++,setjmp(*(jmp_buf*)(argv[2])),*(int*)(argv[1])+=i%2?0:i,i+=*(int*)(argv[0]),*(int*)(argv[0])=i-*(int*)(argv[0]),i-=*(int*)(argv[0]),*(int*)(argv[0])+=i,i<4000000?longjmp(*(jmp_buf*)(argv[2]),0),0:printf("%d\n",*(int*)(argv[1])),0;}