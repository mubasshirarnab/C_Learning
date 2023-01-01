#include<stdio.h>
#include<string.h>

typedef struct{
    char first[20];
    char last[20];
}nametype;

typedef struct{
    nametype name;
    int id;
    char grade[3];
}studenttype;

void calculate_grade(studenttype *s, int marks);
int main()
{
    studenttype student[5];
    int i,n=5;
    int marks[]={72,82,60,20,50};

    printf("Enter All the student's Information: ");
    for(i=0; i<n; i++){
        printf("\nEnter the %dth student's name: ",i+1);
        scanf("%s %s", student[i].name.first, student[i].name.last);
        printf("Enter his ID: ");
        scanf("%d", &student[i].id);
        strcpy(student[i].grade, "");
    }
    for(i=0; i<n; i++){
        calculate_grade(&student[i], marks[i]);
    }

    printf("\n\nName:\t\tId:\tMarks:\tGrade:\n");
    for(i=0; i<n; i++){
        printf("%s %s\t%d\t%d\t%s\n", student[i].name.first,student[i].name.last,student[i].id,marks[i],student[i].grade);
    }

    return 0;
}

void calculate_grade(studenttype *s, int marks)
{
    if(marks>=90){
        strcpy(s->grade, "A+");
    }
    else if(marks>=80){
        strcpy(s->grade,"A");
    }
    else if(marks>=70){
        strcpy(s->grade, "A-");
    }
    else if(marks>=60){
        strcpy(s->grade, "B");
    }
    else if(marks>=50){
        strcpy(s->grade, "B+");
    }
    else if(marks>=40){
        strcpy(s->grade, "C");
    }
    else{
        strcpy(s->grade, "F");
    }
}
