#include<stdio.h>

int main()
{
    int input;
    int passes=0, fails=0;

    while(1){
        printf("Enter the Inputs: ");
        scanf("%d", &input);
        if(input==-1){
            break;
        }
        if(input>=55){
            passes++;
        }
        else{
            fails++;
        }
    }
    printf("\nPasses: %d and Fails: %d", passes, fails);

    return 0;
}
