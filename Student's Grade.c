#include<stdio.h>

typedef struct{
    char first[20];
    char last[20];
}nametype;

typedef struct{
    nametype name;
    int id;
    float marks;
    char grade;
}studenttype;

int CalculateGrade(studenttype std[], int x);
int main()
{
    int i,n;
    printf("Enter the number of Students: ");
    scanf("%d", &n);
    studenttype student[n];

    for(i=0; i<n; i++){
        printf("\nEnter %dth Student's Name: ", i+1);
        scanf("%s %s", student[i].name.first, student[i].name.last);
        printf("Enter his Id: ");
        scanf("%d", &student[i].id);
        printf("Enter his Marks: ");
        scanf("%f", &student[i].marks);
        student[i].grade=CalculateGrade(student,n);
    }

    printf("\nName\t\tID\tMarks\tGrade\n");
    for(i=0; i<n; i++){
        printf("%s %s\t%d\t%.2f\t%c\n", student[i].name.first, student[i].name.last, student[i].id, student[i].marks, student[i].grade);
    }

    return 0;
}

int CalculateGrade(studenttype std[], int x)
{
    char g=0;
    for(int i=0; i<x; i++){
        if(std[i].marks>=90){
            g='A';
        }
        else if(std[i].marks>=80){
            g='B';
        }
        else if(std[i].marks>=70){
            g='C';
        }
        else if(std[i].marks>=60){
            g='D';
        }
        else if(std[i].marks>=50){
            g='E';
        }
        else{
            g='F';
        }
    }

    return g;
}
