#include<stdio.h>
int main(){ printf("Grammar:\nS -> CC\nC -> cC | d\n\nLR(0) ITEMS\n");
printf("I0:\nS'->•S\nS->•CC\nC->•cC\nC->•d\n\nI1:\nS'->S•\n"); }