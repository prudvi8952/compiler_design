#include<stdio.h>

int main(){

    char nonterminals[10],terminals[10];
    char table[10][10][10];
    int nt,t;

    printf("Enter number of non-terminals: ");
    scanf("%d",&nt);

    printf("Enter non-terminals:\n");
    for(int i=0;i<nt;i++)
        scanf(" %c",&nonterminals[i]);

    printf("Enter number of terminals: ");
    scanf("%d",&t);

    printf("Enter terminals:\n");
    for(int i=0;i<t;i++)
        scanf(" %c",&terminals[i]);

    printf("\nEnter parsing table entries:\n");

    for(int i=0;i<nt;i++){
        for(int j=0;j<t;j++){

            printf("M[%c,%c] = ",
                   nonterminals[i],terminals[j]);

            scanf("%s",table[i][j]);
        }
    }

    printf("\nPredictive Parsing Table:\n");

    for(int i=0;i<nt;i++){
        for(int j=0;j<t;j++){
            printf("%s\t",table[i][j]);
        }
        printf("\n");
    }

    return 0;
}