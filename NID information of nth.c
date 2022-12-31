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
    int i,n;
    printf("Enter the number of person: ");
    scanf("%d", &n);
    nid A[n];

    printf("\nEnter All the Information: \n");
    for(i=0; i<n; i++){
        printf("\nEnter  %dth person's Name: ", i+1);
        scanf("%s %s", A[i].name.first, A[i].name.last);
        printf("Enter his/her ID no.: ");
        scanf("%d", &A[i].id);
        printf("Enter his/her Father's Name: ");
        scanf("%s %s", A[i].father_name.first, A[i].father_name.last);
        printf("Enter his/her Mother's Name: ");
        scanf("%s %s", A[i].mother_name.first, A[i].mother_name.last);
        printf("Enter his/her Date of Birth: ");
        scanf("%d %d %d", &A[i].birth.day, &A[i].birth.month, &A[i].birth.year);
        printf("Enter his/her Signature: ");
        scanf("%s", A[i].signature);
    }

    for(i=0; i<n; i++){
        printf("\n\n%s's Data: \n", A[i].name.first);
        printf("Name: \t\t%s %s\n", A[i].name.first, A[i].name.last);
        printf("Id: \t\t%d\n", A[i].id);
        printf("Father's Name: \t%s %s\n", A[i].father_name.first, A[i].father_name.last);
        printf("Mother's Name: \t%s %s\n", A[i].mother_name.first, A[i].mother_name.last);
        printf("Date of Birth: \t%d-%d-%d\n", A[i].birth.day, A[i].birth.month, A[i].birth.year);
        printf("Signature: \t%s\n", A[i].signature);
    }

    return 0;
}

