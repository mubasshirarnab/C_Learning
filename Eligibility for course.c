#include<stdio.h>

int main()
{
    int maths,phy,chem,total_in_math_phy,total_in_all;
    printf("Marks in Maths: ");
    scanf("%d", &maths);
    printf("Marks in Physics: ");
    scanf("%d", &phy);
    printf("Marks in Chemistry: ");
    scanf("%d", &chem);
    printf("Total marks in Math and Physics: ");
    scanf("%d", &total_in_math_phy);
    printf("Total marks in all Subject: ");
    scanf("%d", &total_in_all);

    if(maths>=65 && phy>=55 && chem>=50 && total_in_all>=190 && total_in_math_phy>=140){
        printf("The Candidate id Eligible");
    }
    else{
        printf("The Candidate is not Eligible");
    }

    return 0;
}
