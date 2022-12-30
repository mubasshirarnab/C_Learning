#include<stdio.h>

typedef struct{
    char first[20];
    char last[20];
}nametype;

typedef struct{
    int day;
    int month;
    int year;
}date;

typedef struct{
    nametype name;
    nametype father_name;
    nametype mother_name;
    date birth;
    int id;
    char signature[10];
}nid;

int main()
{
    nid A;

    printf("Enter All the Information: \n");
    printf("Enter Name: ");
    scanf("%s %s", A.name.first, A.name.last);
    printf("Enter the ID no.: ");
    scanf("%d", &A.id);
    printf("Enter Father's Name: ");
    scanf("%s %s", A.father_name.first, A.father_name.last);
    printf("Enter Mother's Name: ");
    scanf("%s %s", A.mother_name.first, A.mother_name.last);
    printf("Enter the Date of Birth: ");
    scanf("%d %d %d", &A.birth.day, &A.birth.month, &A.birth.year);
    printf("Enter the Signature: ");
    scanf("%s", A.signature);


    printf("\n\nName: \t\t%s %s\n", A.name.first, A.name.last);
    printf("Id: \t\t%d\n", A.id);
    printf("Father's Name: \t%s %s\n", A.father_name.first, A.father_name.last);
    printf("Mother's Name: \t%s %s\n", A.mother_name.first, A.mother_name.last);
    printf("Date of Birth: \t%d-%d-%d\n", A.birth.day, A.birth.month, A.birth.year);
    printf("Signature: \t%s\n", A.signature);

    return 0;
}
