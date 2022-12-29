#include<stdio.h>

struct student{
    char name[20];
    int ID;
    float marks;
    char grade;
};

char Check_Grade(struct student);
int main()
{
    struct student std;

    printf("Enter the name: ");
    gets(std.name);
    printf("Enter the ID: ");
    scanf("%d", &std.ID);
    printf("Enter the mark: ");
    scanf("%f", &std.marks);
    std.grade=Check_Grade(std);

    printf("Name\tID\tMarks\tGrade\n");
    printf("%s\t%d\t%.2f\t%c", std.name,std.ID,std.marks,std.grade);

    return 0;
}

char Check_Grade(struct student s)
{
    char g;
    if(s.marks>=90) g='A';
    else if(s.marks>=80) g='B';
    else if(s.marks>=70) g='C';
    else if(s.marks>=60) g='D';
    else if(s.marks>=50) g='E';
    else g='F';

    return g;
}
