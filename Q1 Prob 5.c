#include<stdio.h>
#include<string.h>

typedef struct{
    char name[30];
    int id;
    int salary;
}EmpInfo;

int main()
{
    int n,i,flag;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    EmpInfo nam[n], ids[n], sal[n];

    for(i=0; i<n; i++){
        printf("\nEnter %dth person's Name: ", i+1);
        scanf("%s", nam[i].name);
        printf("Enter his/her ID: ");
        scanf("%d", &ids[i].id);
        printf("Enter his/her Salary: ");
        scanf("%d", &sal[i].salary);
    }
    printf("\nInformation stored successfully.\n");

    char search_name[30];
    printf("\nEnter the name to search: ");
    scanf("%s", search_name);

    for(i=0; i<n; i++){
        if(strcmp(search_name, nam[i].name) == 0){
            flag = 0;
            printf("\nName: %s\nID: %d\n", nam[i].name, ids[i].id);

            if(sal[i].salary>1600){
                printf("Status: A");
            }
            else{
                printf("Status: B");
            }
        }
    }

    return 0;
}
