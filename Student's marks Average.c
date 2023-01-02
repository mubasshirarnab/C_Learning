#include<stdio.h>

typedef struct{
    char first[20];
    char last[20];
}nametype;

typedef struct{
    nametype name;
    int id;
    float marks;
}student;

float average(student *s, int x);

int main()
{
    int n;
    printf("Enter the number of student: ");
    scanf("%d", &n);
    student std[n];

    printf("Enter All the Student's Information: \n");
    for(int i=0; i<n; i++){
        printf("\nEnter %dth Student's Name: ",i+1);
        scanf("%s %s", std[i].name.first, std[i].name.last);
        printf("Enter his ID no.: ");
        scanf("%d", &std[i].id);
        printf("Enter his Marks: ");
        scanf("%f", &std[i].marks);
    }

    printf("\nName\t\tId\tMarks\n");
    for(int i=0; i<n; i++){
        printf("%s %s\t%d\t%.2f\n", std[i].name.first, std[i].name.last, std[i].id, std[i].marks);
    }
    printf("\nThe Average Marks is: %.2f", average(&std,n));

    return 0;
}

float average(student *s, int x)
{
    int sum=0;
    float avg;
    for(int i=0; i<x; i++){
        sum=sum + s[i].marks;
    }
    avg=sum/x;

    return avg;
}
