#include<stdio.h>

int main()
{
    int marks, count,i;
    int total_marks[]={54,50,70,80,77,90,88,66,92,56,87,76,65,69,87,66,88,50,88,90,70,65,88,91,55,74,58,59,90,80};

    for(marks=50; marks<=100; marks++){
        count=0;

        for(i=0;i<30;i++){
            if(total_marks[i]==marks){
                count++;
            }
        }

        printf("Marks: %d  count: %d\n",marks, count);
    }

    return 0;
}
