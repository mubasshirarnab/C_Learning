#include<stdio.h>

struct nametype{
    char first[20];
    char last[20];
};
struct EmpInfo{
    struct nametype name;
    int position;
    int salary;
    float performance_score;
};
int main()
{
    int i,n;
    printf("Enter the number of Employes: ");
    scanf("%d", &n);
    struct EmpInfo employe[n];

    printf("Enter all the Employe's Information: \n");
    for(i=0; i<n; i++){
        printf("\nEnter the %dth Employee name: ", i+1);
        scanf("%s %s", employe[i].name.first, employe[i].name.last);
        printf("Enter his Position: ");
        scanf("%d", &employe[i].position);
        printf("Enter his Salary: ");
        scanf("%d", &employe[i].salary);
        printf("Enter his Performance Score: ");
        scanf("%f", &employe[i].performance_score);
    }

    int max=0, max_i;
    for(i=0; i<n; i++){
        if(employe[i].performance_score>max){
            max=employe[i].performance_score;
            max_i=i;
        }
    }

    printf("\nName\t\tPosition\tSalary\tPerformance Score\n");
    printf("%s %s\t%d\t%d\t%.2f\n", employe[max_i].name.first, employe[max_i].name.last, employe[max_i].position, employe[max_i].salary, employe[max_i].performance_score);

    return 0;
}
