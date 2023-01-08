#include<stdio.h>

int main()
{
    FILE *fp;

    if(fp == NULL){
        printf("Error.");
        return;
    }
    fp = fopen("Sample.txt", "r");

    int num,count=0;
    float avg,sum=0;

    printf("The number in the file: \n");

    while(!feof(fp)){
        fscanf(fp, "%d", &num);
        printf("%d\n", num);
        sum+=num;
        count++;
    }

    fclose(fp);

    avg = sum/count;

    printf("The average is %.2f\n", avg);

    return 0;
}
