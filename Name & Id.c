#include<stdio.h>
#include<string.h>

struct student{
    int ID;
    char name[40];
};

int main()
{
    struct student one;

    scanf("%d", &one.ID);
    fflush(stdin);
    scanf("%[^\n]s", one.name);

    printf("Id: %d\n",one.ID);
    printf("Name: %s\n",one.name);

    return 0;
}
