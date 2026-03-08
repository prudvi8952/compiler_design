#include <stdio.h>

int main(){

    int nfa[10][2],dfa[10][2];
    int states;

    printf("Enter number of states: ");
    scanf("%d",&states);

    printf("Enter NFA transitions (for 0 and 1):\n");

    for(int i=0;i<states;i++){
        for(int j=0;j<2;j++){
            scanf("%d",&nfa[i][j]);
        }
    }

    printf("\nDFA Transition Table\n");

    for(int i=0;i<states;i++){
        for(int j=0;j<2;j++){
            dfa[i][j]=nfa[i][j];
            printf("%d ",dfa[i][j]);
        }
        printf("\n");
    }

    return 0;
}