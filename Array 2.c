#include<stdio.h>

int main()
{
    int i;
    int total_marks[]={23,44,55,67,87,56,78,98,98,76,87,56,67,86,45,67,87,54,56,76,87,56,45,76,87,56,67,87,76,87};
    int marks_count[101];

    for(i=0; i<101; i++){
        marks_count[i]=0;
    }

    for(i=0; i<30; i++){
        marks_count[total_marks[i]]++;
    }

    for(i=20; i<=100; i++){
        printf("Marks: %d  Count: %d\n", i, marks_count[i]);
    }

    return 0;

}
