#include<stdio.h>

struct nametype{
    char first[20];
    char last[20];
};

struct student{
    int id;
    struct nametype name;
};

int main()
{
    struct student one;

    printf("Enter the Id: ");
    scanf("%d", &one.id);
    fflush(stdin);
    printf("Enter the First and Last Name: \n");
    scanf("%s %s", one.name.first, one.name.last);

    printf("\nID: %d\n", one.id);
    printf("Name: %s %s\n", one.name.first, one.name.last);

    return 0;
}
