#include<stdio.h>
int main(){ printf("Grammar:\nE -> E+T | T\nT -> T*F | F\nF -> (E) | id\n\n");
printf("LEADING(E)  = { (, id }\nTRAILING(E) = { ), id }\n"); }