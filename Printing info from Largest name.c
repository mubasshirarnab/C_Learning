#include<stdio.h>
#include<string.h>

typedef struct{
    char name[30];
    int id;
    float cgpa;
}student;

int main()
{
    int i,n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    student s[n];

    for(i=0; i<n; i++){
        printf("\nEnter the %dth Student's Name: ", i+1);
        scanf("%s", s[i].name);
        printf("Enter his/her ID: ");
        scanf("%d", &s[i].id);
        printf("Enter his/her CGPA: ");
        scanf("%f", &s[i].cgpa);
    }

    int max,mini,max_i,mini_i;

    max=mini=strlen(s[0].name);

    for(i=1; i<n; i++){
        if(strlen(s[i].name)>max){
            max=strlen(s[i].name);
            max_i=i;
        }
        if(strlen(s[i].name)<mini){
            mini=strlen(s[i].name);
            mini_i=i;
        }
    }

    printf("\nShortest Info: \n");
    printf("Name: %s\nId: %d\nCGPA: %.2f\n",s[mini_i].name, s[mini_i].id, s[mini_i].cgpa);
    printf("\nLongest Info: \n");
    printf("Name: %s\nId: %d\nCGPA: %.2f\n",s[max_i].name, s[max_i].id, s[max_i].cgpa);

    return 0;
}
