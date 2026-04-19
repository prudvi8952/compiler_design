#include<stdio.h>
#include<string.h>
#include<ctype.h>
char stack[50]; int top=-1;
void push(char c){ stack[++top]=c; }
char pop(){ return stack[top--]; }
int priority(char c){ if(c=='+'||c=='-') return 1; if(c=='*'||c=='/') return 2; return 0; }
int main(){ char infix[50], postfix[50]; int k=0;
printf("Enter Infix Expression: "); scanf("%s",infix);
for(int i=0;i<strlen(infix);i++){ if(isalnum(infix[i])) postfix[k++]=infix[i];
else{ while(top!=-1 && priority(stack[top])>=priority(infix[i])) postfix[k++]=pop(); push(infix[i]); }}
while(top!=-1) postfix[k++]=pop(); postfix[k]='\0';
printf("Postfix Expression: %s\n",postfix); }