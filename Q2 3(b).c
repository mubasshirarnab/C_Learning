#include<stdio.h>

int main()
{
    FILE *fp;

    fp = fopen("test.txt", "r");

    if(fp == NULL){
        printf("Error.");
        return;
    }

    int i, num, n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    int array[n];

    for(i=0; i<n; i++){
        if(!feof(fp)){
            fscanf(fp, "%d", &num);
            printf("%d\n", num);
            array[i]=num;
        }
    }

    fclose(fp);

    int max = array[0];
    for(i=1; i<n; i++){
        if(array[i] > max){
            max = array[i];
        }
    }
    printf("\nThe Maximum value is: %d\n", max);

    return 0;
}
