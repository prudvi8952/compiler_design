#include<stdio.h>
#include<string.h>
char stack[50], input[50];
int top=-1, i=0;
void push(char c){ stack[++top]=c; stack[top+1]='\0'; }
void reduce(){ if(strstr(stack,"id")){ stack[top-1]='E'; top--; stack[top+1]='\0'; printf("Reduce: E->id\n"); } }
int main(){ printf("Shift Reduce Parser\nEnter input string: "); scanf("%s",input);
printf("\nSTACK\tINPUT\tACTION\n");
while(i<strlen(input)){ push(input[i]); printf("%s\t%s\tShift\n",stack,input+i+1); reduce(); i++; }
if(strcmp(stack,"E")==0) printf("\nAccepted\n"); else printf("\nRejected\n"); }