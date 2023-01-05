#include<stdio.h>

int main()
{
    FILE *fp;

    fp=fopen("my_file.txt", "w");

    fprintf(fp, "This is a file created by my program! \n");
    fprintf(fp, "I am so happy.");

    fclose(fp);

    return 0;
}
