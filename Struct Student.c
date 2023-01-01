#include<stdio.h>

struct nametype{
    char first[20];
    char last[20];
};

struct studenttype{
    int id;
    struct nametype name;
};

int main()
{
    int i,n;
    printf("Enter the number of Students: ");
    scanf("%d", &n);
    struct studenttype student[n];

    for(i=0; i<n; i++){
        printf("Enter the ID of %dth student: ", i+1);
        scanf("%d", &student[i].id);
        printf("Enter the First and Last name of %dth Student: ", i+1);
        scanf("%s %s", student[i].name.first, student[i].name.last);
    }

    printf("\nOutput: \n");
    for(i=0; i<n; i++){
        printf("%d\t%s %s\n", student[i].id,student[i].name.first,student[i].name.last);
    }

    return 0;
}
