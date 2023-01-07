#include<stdio.h>

int main()
{
    FILE *fp1,*fp2;

    fp1 = fopen("in.txt", "r");
    fp2 = fopen("add.txt", "w");

    int num1,num2,sum;

    fscanf(fp1, "%d %d", &num1, &num2);

    sum = num1 + num2;

    fprintf(fp2, "%d + %d = %d", num1, num2, sum);

    fclose(fp1);
    fclose(fp2);

    return 0;
}
