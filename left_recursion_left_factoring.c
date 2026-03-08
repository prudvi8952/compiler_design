#include<stdio.h>
#include<string.h>

int main(){

    char prod[20],alpha[20],beta[20];

    printf("Enter production (Example: A->Aa|b): ");
    scanf("%s",prod);

    char A = prod[0];

    int i=3,j=0,k=0;

    if(prod[i]==A){

        i++;

        while(prod[i]!='|'){
            alpha[j++]=prod[i++];
        }

        alpha[j]='\0';

        i++;

        while(prod[i]!='\0'){
            beta[k++]=prod[i++];
        }

        beta[k]='\0';

        printf("\nAfter Removing Left Recursion:\n");

        printf("%c -> %s%c'\n",A,beta,A);
        printf("%c' -> %s%c' | e\n",A,alpha,A);
    }

    else{
        printf("No Left Recursion\n");
    }

    return 0;
}