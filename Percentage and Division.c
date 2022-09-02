#include<stdio.h>

int main()
{
    int roll_no,phy,chem,comp,total_marks;

    float percentage;

    printf("Enter the Roll no.: ");
    scanf("%d", &roll_no);
    printf("Marks in Physics: ");
    scanf("%d", &phy);
    printf("Marks in Chemistry: ");
    scanf("%d", &chem);
    printf("Marks in Computer Science: ");
    scanf("%d", &comp);

    total_marks=phy+chem+comp;

    percentage=(phy+chem+comp)/3;
    printf("The Percentage is %.2lf\n", percentage);

    if(percentage>=80){
        printf("First Division");
    }
    else if(percentage>=50 && percentage<80){
        printf("Second Division");
    }
    else if(percentage>=33 && percentage<50){
        printf("Third Division");
    }
    else{
        printf("Fail");
    }

    return 0;
}
