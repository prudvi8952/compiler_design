#include<stdio.h>
int main(){ printf("Expression: a=b+c*d\n\nQuadruple:\nop arg1 arg2 result\n*  c   d   t1\n+  b   t1  t2\n=  t2  -   a\n");
printf("\nTriple:\n0: * c d\n1: + b (0)\n2: = (1) a\n\nIndirect Triple:\nPointer Table -> 0 1 2\n"); }