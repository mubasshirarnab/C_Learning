#include<stdio.h>

int main()
{
    int input;
    int passes=0, fails=0;

    do{
        printf("Enter the Inputs: ");
        scanf("%d", &input);
        if(input!=-1){
            if(input>=55){
                passes++;
            }
            else{
                fails++;
            }
        }
    }while(input!=-1);

    printf("\nPasses: %d and Fails: %d", passes, fails);

    return 0;
}
