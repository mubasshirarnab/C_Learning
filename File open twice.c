#include<stdio.h>

int main()
{
    FILE *fp;

    fp = fopen("my_file.txt", "w");

    fprintf(fp,"This is a file created by my program!\n");
    fprintf(fp, "I'm so happy.\n");

    fclose(fp);

    fp = fopen("my_file.txt", "a");
    fprintf(fp,"Second Line\n");
    fclose(fp);

    return 0;
}
