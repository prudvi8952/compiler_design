#include<stdio.h>
#include<ctype.h>

int main(){

    char production[10][10];
    int n;

    printf("Enter number of productions: ");
    scanf("%d",&n);

    printf("Enter productions:\n");

    for(int i=0;i<n;i++){
        scanf("%s",production[i]);
    }

    printf("\nFIRST sets:\n");

    for(int i=0;i<n;i++){

        printf("FIRST(%c) = { %c }\n",
               production[i][0],
               production[i][3]);
    }

    printf("\nFOLLOW sets (simplified):\n");

    for(int i=0;i<n;i++){

        printf("FOLLOW(%c) = { $ }\n",
               production[i][0]);
    }

    return 0;
}