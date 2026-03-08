#include <stdio.h>
#include <string.h>

int main() {

    char regex[50];
    int states = 0;

    printf("Enter Regular Expression: ");
    scanf("%s", regex);

    printf("\nNFA Construction:\n");

    for(int i=0;i<strlen(regex);i++){

        if(regex[i]=='*'){
            printf("Loop on state %d\n",states);
        }

        else if(regex[i]=='|'){
            printf("Branch at state %d\n",states);
        }

        else{
            printf("State %d -- %c --> State %d\n",
                   states,regex[i],states+1);
            states++;
        }
    }

    printf("Final State: %d\n",states);

    return 0;
}