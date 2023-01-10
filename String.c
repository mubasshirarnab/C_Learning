#include<stdio.h>

int main()
{
    char name[30], id[11], str3[100];
    printf("Enter the Name: ");
    scanf("%s", name);
    printf("Enter the ID: ");
    scanf("%s", id);

    int i,j;
    for(i=0,j=0; name[i]!='\0'; i++,j++){
        str3[j]=name[i];
    }
    str3[j]=' ';
    j++;

    for(i=0; id[i]!='\0'; i++,j++){
        str3[j]=id[i];
    }
    str3[j]='\0';

    printf("%s", str3);

    return 0;
}
